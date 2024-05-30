#include <stdio.h>
void swap_negmax_last(int size, int a[]);

int main(void)
{
    int a[] = {1, -3, -2, -4, 5, 6, 7, 8, 9, -1, 10};
    int length = sizeof(a) / sizeof(a[0]);
    swap_negmax_last(length, a);
    for(int i=0; i<length; i++)
    {
        printf("%d ", a[i]);
    }
}

void swap_negmax_last(int size, int a[])
{
    int min=0;
    int idx=0;

    for(int i=0; i<size; i++)
    {
        if(a[i] == -1)
        {
            min=a[i];
            idx=i;
            break;
        }
        if(a[i]<0 && min<a[i] || min>=0)
        {
            min=a[i];
            idx=i;

        }
    }

    if(min<0)
    {
        int swap=a[idx];
        a[idx]= a[size-1];
        a[size-1]=swap;
    }
}
