#include <stdio.h>
#include "temp_api.h"

float avg_temp_month(int month, unsigned int data_length, temp_data data[])
{
    float avg_temp=0;
    int count=0;

    for(int i=0; i<data_length; i++)
    {
        if (data[i].month == month)
        {
            avg_temp += data[i].temperature;
            count++;
        }
    }
    return avg_temp/count;
}

int min_temp_month(int month, unsigned int data_length, temp_data temp_data[])
{
    int min=temp_data[0].temperature;

    for(int i=0; i<data_length; i++)
    {
        if(temp_data[i].month == month)
        {
            if(temp_data[i].temperature < min)
            {
                min=temp_data[i].temperature;
            }
        }
    }
    return min;
}

int max_temp_month(int month, unsigned int data_length, temp_data temp_data[])
{
    int max=temp_data[0].temperature;

    for(int i=0; i<data_length; i++)
    {
        if(temp_data[i].month == month)
        {
            if(temp_data[i].temperature > max)
            {
                max=temp_data[i].temperature;
            }
        }
    }
    return max;
}

float avg_temp_year(int year, unsigned int data_length, temp_data data[])
{
    float avg_temp=0;
    int count=0;

    for(int i=0; i<data_length; i++)
    {
        if (data[i].year == year)
        {
            avg_temp += data[i].temperature;
            count++;
        }
    }
    return avg_temp/count;
}

int min_temp_year(int year, unsigned int data_length, temp_data temp_data[])
{
    int min=temp_data[0].temperature;

    for(int i=0; i<data_length; i++)
    {
        if(temp_data[i].year == year)
        {
            if(temp_data[i].temperature < min)
            {
                min=temp_data[i].temperature;
            }
        }
    }
    return min;
}

int max_temp_year(int year, unsigned int data_length, temp_data temp_data[])
{
    int max=temp_data[0].temperature;

    for(int i=0; i<data_length; i++)
    {
        if(temp_data[i].year == year)
        {
            if(temp_data[i].temperature > max)
            {
                max=temp_data[i].temperature;
            }
        }
    }
    return max;
}