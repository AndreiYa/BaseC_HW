#include <stdio.h>

void conv(int num);

int main() {
    int n;
    scanf("%d", &n);

    if(n == 0)
    {
        printf("%d", n);
        return 0;
    }
    conv(n);
    return 0;
}

void conv(int num)
{
    if(num<2)
    {
        printf("%d", 1);
    } else
    {
        conv(num/2);
        printf("%d", num%2);
    }
}