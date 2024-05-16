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
    int temp = arr[SIZE-1];

    for(int i=SIZE-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}