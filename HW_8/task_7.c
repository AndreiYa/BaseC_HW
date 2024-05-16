#include <stdio.h>
enum {SIZE = 10};

int fillArray(int* arr);
void calcArray(int* arr);

int main() {
    int arr [SIZE];
    fillArray(arr);
    calcArray(arr);

    return 0;
}

int fillArray(int* arr)
{
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void calcArray(int* arr)
{
    int swap [SIZE];
    int i=0;
    int j= SIZE/2-1;

    for(i, j; i<SIZE/2; i++, j--)
    {
        swap[i] = arr[j];
        swap[SIZE/2+i] = arr[SIZE-(i+1)];
    }

    for (int i=0; i<SIZE; i++)
    {
        printf("%d ", swap[i]);
    }
}