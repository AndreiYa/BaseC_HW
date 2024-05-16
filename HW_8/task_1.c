#include <stdio.h>
enum {SIZE = 5};

int fillArray(int* n);
float calcArray(int* n);

int main() {
    int n [SIZE];
    fillArray(n);
    printf("%.3f", calcArray(n));

    return 0;
}

int fillArray(int* n)
{
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d", &n[i]);
    }
}

float calcArray(int* n)
{
    float sum = 0;
    for(int i=0; i<SIZE; i++)
    {
        sum+=n[i];
    }
    return sum/SIZE;
}