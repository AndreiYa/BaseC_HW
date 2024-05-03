#include <stdio.h>

int abs(int num);

int main()
{
    int num = 0;
    scanf("%d", &num);

    printf("%d", abs(num));
    return 0;
}

int abs(int num)
{
    return num > 0 ? num : (num *= -1);
}