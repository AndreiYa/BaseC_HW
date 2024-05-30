#include <stdio.h>

void sort_even_odd(int n, int a[]);
void fill_array(int size, int a[]);
void print_array(int size, int a[]);

int main()
{
    int size=0;

    scanf("%d\n", &size);
    int a[size];

    fill_array(size, a);
    sort_even_odd(size, a);
    print_array(size, a);

    return 0;
}

void fill_array(int size, int a[])
{
    for (int i=0; i<size-1; i++)
    {
        scanf("%d ", &a[i]);
    }
}

void sort_even_odd(int n, int a[])
{
    int temp[n];
    int swap = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 == 0)
        {
            temp[swap++] = a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 != 0)
        {
            temp[swap++] = a[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        a[i] = temp[i];
    }
}

void print_array(int size, int a[])
{
    for(int i=0; i<size-1; i++)
    {
        printf("%d ", a[i]);
    }
}