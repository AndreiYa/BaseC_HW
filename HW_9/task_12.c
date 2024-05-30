#include <stdio.h>
void change_max_min(int size, int a[]);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(a) / sizeof(a[0]);
    change_max_min(length, a);
    for(int i=0; i<length; i++)
    {
        printf("%d ", a[i]);
    }
}

void change_max_min(int size, int a[])
{
    int min=a[0];
    int idx_min=0;
    int max=a[0];
    int idx_max=0;
    int swap;

    for(int i=0; i<size; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            idx_min=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            idx_max=i;
        }
    }
    swap=a[idx_min];
    a[idx_min]= a[idx_max];
    a[idx_max]=swap;
}
