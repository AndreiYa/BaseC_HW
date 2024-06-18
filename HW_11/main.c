#include <stdio.h>
#include "temp_api.h"

int main(void)
{
    unsigned int data_length = 10;
    temp_data data[] = {
            {2021,04,16,0,01,5},
            {2021,04,16,0,01,10},
            {2021,04,16,0,01,4},
            {2021,05,16,0,01,30},
            {2021,05,16,0,01,20},
            {2021,05,16,0,01,18},
            {2021,06,16,0,01,2},
            {2021,06,16,0,01,-5},
            {2021,12,16,0,01,-20},
            {2022,01,16,0,01,-20},
    };

    printf("month average temperature: %.2f deg\n", avg_temp_month(04, data_length, data));
    printf("month minimum temperature: %d deg\n", min_temp_month(04, data_length, data));
    printf("month maximum temperature: %d deg\n", max_temp_month(04, data_length, data));

    printf("year average temperature: %.2f deg\n", avg_temp_year(2021, data_length, data));
    printf("year minimum temperature: %d deg\n", min_temp_year(2021, data_length, data));
    printf("year maximum temperature: %d deg\n", max_temp_year(2021, data_length, data));
    return 0;
}