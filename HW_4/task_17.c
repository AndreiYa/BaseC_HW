#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b)<=c || (a+c)<=b || (c+b)<=a)
        printf("NO");
    else
    {
        printf("YES");
    }
    return 0;
}
