#include <stdio.h>
#include <inttypes.h>

long int seeds(int num);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lu", seeds(n));
    return 0;
}

long int seeds(int num)
{
    long int res = 1;

    for(int i=1; i<num; i++)
    {
        res *= 2;
    }
    return res;
}