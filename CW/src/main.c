#include "../api/temp_functions.h"

stat data;

int main(int argc, char **argv)
{
    char *file_name;
    int month=0;

    get_params(argc, argv, &file_name, &month);
    read_file(&data, file_name);

    if(month)
    {
        stat_month(&data, month);
    }
    else
    {
        stat_year(&data);
    }

    return 0;
}
