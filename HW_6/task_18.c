#include <stdio.h>

int is_digit(char c);

int main(void)
{
    char c = getchar();
    printf("%d", is_digit(c));
    return 0;
}

int is_digit(char c)
{
    int res = 0;
    
    do
    {
        if(c >= '0' && c <= '9')
        {
            res++;
        }
    } 
    while((c = getchar()) != '.');
    return res;
}