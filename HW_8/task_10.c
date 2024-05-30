#include <stdio.h>
enum {SIZE = 12};

int fillArray(int* arr);
void calcArray(int* arr, int k);

int main() {
    int arr [SIZE];
    fillArray(arr);
    calcArray(arr, 4);

    return 0;
}

int fillArray(int* arr)
{
    for(size_t i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void calcArray(int* arr, int k)
{
    int swap;
    for(size_t i=0; i<(SIZE-k); i++)
    {
        swap=arr[i];
        arr[i] = arr[i+k];
        arr[i+k] = swap;
    }

    for (size_t i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}