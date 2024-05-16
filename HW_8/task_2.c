#include <stdio.h>
enum {SIZE = 5};

int fillArray(int* n);
int minElemArray(int* n);

int main() {
    int n [SIZE];
    fillArray(n);
    printf("%d", minElemArray(n));

    return 0;
}

int fillArray(int* n)
{
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &n[i]);
    }
}

int minElemArray(int* n)
{
    int min = n[0];
    for(int i=0; i<SIZE; i++)
    {
        if(n[i]<min)
        {
            min=n[i];
        }
    }
    return min;
}