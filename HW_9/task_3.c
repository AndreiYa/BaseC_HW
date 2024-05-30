#include <stdio.h>

void count_in(void);

int main(void)
{
    count_in();
    return 0;
}

void count_in()
{
    int number[100]={0};
    int result[10]={0};
    int count=0;
    char c;

    while((c=getchar()) != '\n')
    {
        number[count++] = c-'0';
    }

    for(int i=0; i<count; i++)
    {
        result[number[i]]++;
    }

    for(int i = 0; i<10; i++)
    {
        if(result[i] != 0)
        {
            printf("%d %d\n", i, result[i]);
        }
    }
}