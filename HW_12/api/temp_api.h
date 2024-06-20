#include <stdio.h>
typedef struct temp_data
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} temp_data;

typedef struct stat
{
    unsigned int length;
    temp_data* line;
} stat;


float avg_temp_month(stat *data, int month);
int min_temp_month(stat *data, int month);
int max_temp_month(stat *data, int month);

float avg_temp_year(stat *data);
int min_temp_year(stat *data);
int max_temp_year(stat *data);

void print_data_month(int year, int month, float avg, int max, int min, int errors, int months);
void print_data_year(int year, float avg, int max, int min, int errors);
void get_params(int argc, char **argv, char **name, int *month);
int read_file(stat *data, char *name);

void stat_month(stat *data, int month);
void stat_year(stat *data);