#include <stdio.h>

void missed_num(int length, int a[]);
void sort_array(int length, int a[]);
int fill_array(int *a);

int main(void)
{
    int a[1000]={0};
    int length = fill_array(a);
    sort_array(length, a);
    missed_num(length, a);
}

void missed_num(int length, int a[])
{
    int num=0;
    for(int i=1; i<length; i++)
    {
        if((a[i]+1) != a[i+1] && a[i] !=0)
        {
            num = a[i]+1;
            break;
        }
    }

    printf("%d ", num);
}

void sort_array(int length, int a[])
{
    for (int step = 0; step < length - 1; ++step) {
        for (int i = 0; i < length - step - 1; ++i) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

int fill_array(int *a)
{
    int i=0;
    int length=0;

    do
    {
        scanf("%d",&a[i]);
        i++;
        length++;
    }
    while(a[i-1]);

    return length-1;
}