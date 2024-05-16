#include <stdio.h>
enum {SIZE = 12};

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
    for(size_t i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void calcArray(int* arr)
{
    int swap1, swap2, swap3;

    for(size_t i=0; i<2; i++)
    {
        swap1=arr[i];
        arr[i]=arr[3-i];
        arr[3-i]=swap1;

        swap2=arr[i+4];
        arr[i+4]=arr[7-i];
        arr[7-i]=swap2;

        swap3=arr[i+8];
        arr[i+8]=arr[11-i];
        arr[11-i]=swap3;
    }

    for (size_t i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}