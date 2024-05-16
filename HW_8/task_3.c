#include <stdio.h>
enum {SIZE = 10};

int fillArray(int* n);
void calcArray(int* n);

int main() {
    int n [SIZE];
    fillArray(n);
    calcArray(n);

    return 0;
}

int fillArray(int* n)
{
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &n[i]);
    }
}

void calcArray(int* n)
{
    int min = n[0];
    int idxMin = 0;
    int max = 0;
    int idxMax = 0;

    for(int i=0; i<SIZE; i++)
    {
        if(n[i]<=min)
        {
            min=n[i];
            idxMin = (i + 1);
        }
        if(n[i]>max)
        {
            max=n[i];
            idxMax = (i + 1);
        }
    }
    printf("%d %d %d %d", idxMax, max, idxMin, min);
}