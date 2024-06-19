#include <stdio.h>
#include "helpers.h"

void get_params(int argc, char **argv)
{
    for(int i=0; i<argc; i++)
    {
        char* param = argv[i];
        if(param[0] == '-')
            switch (param[1]) {
                case 'h':
                    printf("help");
                    break;
                default:
                    return;
            }
    }
}
