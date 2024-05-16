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
    int sum = 0;

    for(int i=0; i<SIZE; i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
    }
    printf("%d", sum);
}