#include <stdio.h>

void sort_array(int size, int a[]);
void fill_array(int size, int a[]);
void print_array(int size, int a[]);

int main()
{
    int size=0;

    scanf("%d\n", &size);
    int a[size];

    fill_array(size, a);
    sort_array(size, a);
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

void sort_array(int size, int a[])
{
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

void print_array(int size, int a[])
{
    for(int i=0; i<size-1; i++)
    {
        printf("%d ", a[i]);
    }
}