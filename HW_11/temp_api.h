typedef struct
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} temp_data;

float avg_temp_month(int month, unsigned int data_length, temp_data data[]);
int min_temp_month(int month, unsigned int data_length, temp_data data[]);
int max_temp_month(int month, unsigned int data_length, temp_data data[]);

float avg_temp_year(int year, unsigned int data_length, temp_data data[]);
int min_temp_year(int year, unsigned int data_length, temp_data data[]);
int max_temp_year(int year, unsigned int data_length, temp_data data[]);