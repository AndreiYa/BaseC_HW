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
    int temp = 0;

    for(int i=0; i<SIZE; i++)
    {
        for(int j = i+1; j<SIZE; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d", arr[SIZE-1] + arr[SIZE-2]);
}