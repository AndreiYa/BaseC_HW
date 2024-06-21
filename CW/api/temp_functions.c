#include "temp_functions.h"
#include <stdio.h>
#include <stdlib.h>

int months=0;

int error_handler(int num)
{
    static int error = 0;
    if(num)
    {
        error++;
    }

    return error;
}

float avg_temp_month(stat *data, int month)
{
    float avg_temp=0;
    int count=0;

    for(int i=0; i<data->length; i++)
    {
        if (data->line[i].month == month)
        {
            avg_temp += data->line[i].temperature;
            count++;
        }
    }
    months = count;
    return avg_temp/count;
}

int min_temp_month(stat *data, int month)
{
    int min=100;

    for(int i=0; i<data->length; i++)
    {
        if(data->line[i].month == month)
        {
            if(data->line[i].temperature < min)
            {
                min=data->line[i].temperature;
            }
        }
    }
    return min;
}

int max_temp_month(stat *data, int month)
{
    int max=-100;

    for(int i=0; i<data->length; i++)
    {
        if(data->line[i].month == month)
        {
            if(data->line[i].temperature > max)
            {
                max=data->line[i].temperature;
            }
        }
    }
    return max;
}

float avg_temp_year(stat *data, int month)
{
    float avg_temp=0;
    int count=0;

    for(int i=0; i<data->length; i++)
    {
	    if (data->line[i].month == month)
		{
		    avg_temp += data->line[i].temperature;
		    count++;
	    }
    }
	months = count;
    return avg_temp/count;
}

int min_temp_year(stat *data, int month)
{
    int min=300;

    for(int i=0; i<data->length; i++)
    {

	    if (data->line[i].month == month)
		{
		    if (data->line[i].temperature < min)
			{
			    min = data->line[i].temperature;
		    }
	    }
    }
    return min;
}

int max_temp_year(stat *data, int month)
{
    int max=data->line[0].temperature;

    for(int i=0; i<data->length; i++)
    {
	    if (data->line[i].month == month)
		{
		    if (data->line[i].temperature > max)
			{
			    max = data->line[i].temperature;
		    }
	    }
    }
    return max;
}

void print_data_month(int year, int month, float avg, int max, int min, int errors, int months)
{
    printf("\n");
    printf("# Year Month NuValue ErValue MonthAvg MonthMax MonthMin\n");
    printf("-------------------------------------------------------\n");
    printf("1  %4d   %1d     %3d     %4d   %5.2f      %3d      %3d \n", year, month, months, errors, avg, max, min);
    printf("-------------------------------------------------------\n");
    printf("\n");
}

void print_data_year(int idx, int year, int month, float avg, int max, int min, int errors, int months)
{
    printf("%3d  %4d    %2d     %3d      %2d    %6.2f     %3d     %3d \n", idx, year, month, months, errors, avg, max, min);
}


void get_params(int argc, char **argv, char **name, int *month)
{
    if(!argv[1])
    {
        printf("\n"
               "===================\n"
               "Please read help -h\n"
               "===================\n"
               "\n");
        exit(0);
    }

    for(int i=0; i<argc; i++)
    {
        char* param = argv[i];
        if(param[0] == '-')
        {
            switch (param[1]) {
                case 'h':
                    printf("\n"
                           "======  Help: params [options]  ======\n"
                           "Options:\n"
                           "-h          This help file\n"
                           "-f <PATH>   Path to CSV data file\n"
                           "-m <MONTH>  Print stats for this month\n"
                           "======================================\n"
                           "\n");
                    exit(0);
                case 'f':
                    if(!argv[i+1])
                    {
                        printf("\n"
                               "=======================\n"
                               "Error. No input file!!!\n"
                               "=======================\n"
                               "\n");
                        exit(0);
                    }
                    *name=argv[i+1];
                    break;
                case 'm':
                    if(!argv[i+1])
                    {
                        printf("\n"
                               "==============================================\n"
                               "Error. Please enter correct month from 1 to 12\n"
                               "==============================================\n"
                               "\n");
                        exit(0);
                    }
                    char *end;
                    int m = strtol(argv[i+1], &end, 10);
                    if(m >=1 && m <=12)
                    {
                        *month = m;
                        break;
                    }
                    printf("\n"
                           "=================================\n"
                           "Error. Month must be from 1 to 12\n"
                           "=================================\n"
                           "\n");
                default:
                    exit(0);
            }
        }
    }
}

void read_file(stat *data, char *name)
{
    FILE *f = fopen(name, "r");

    if (f == NULL)
    {
        printf("\n"
               "============================\n"
               "Error. Reading input file!!!\n"
               "============================\n"
               "\n");
        exit(0);
    }

    char row[100];
    int error=1;
    long count_row = 1300;

    data->line = (temp_data*) malloc(sizeof(temp_data)*count_row);

    while (fgets(row, sizeof(row), f)) {
        if (sscanf(row, "%d;%d;%d;%d;%d;%d", &data->line[data->length].year, &data->line[data->length].month, &data->line[data->length].day, &data->line[data->length].hour, &data->line[data->length].minute, &data->line[data->length].temperature) != 6)
        {
            error_handler(1);
            printf("\n");
            printf("===== Error in line %d =====\n", error++);
        }
        else
        {
            error++;
            data->length++;
        }

        if (data->length >= count_row)
        {
            count_row += 1300;
            data->line = (temp_data*) realloc(data->line, sizeof(temp_data)*count_row);
        }
    }

    fclose(f);
}

void stat_month(stat *data, int month)
{
    int year = data->line[0].year;
    int min = min_temp_month(data, month);
    int max = max_temp_month(data, month);
    float avg = avg_temp_month(data, month);
    int errors = error_handler(0);

    print_data_month(year, month, avg, max, min, errors, months);
}

void stat_year(stat *data)
{
	printf("\n");
	printf("#    Year Month NuValue ErValue   YearAvg YearMax YearMin\n");
	printf("---------------------------------------------------------\n");

	for (int i = 1; i <= 12; i++)
	{
		int year = data->line[0].year;
		int min = min_temp_year(data, i);
		int max = max_temp_year(data, i);
		float avg = avg_temp_year(data, i);
		int errors = error_handler(0);
		print_data_year(i, year, i, avg, max, min, errors, months);
	}

	printf("---------------------------------------------------------\n");
	printf("\n");
}