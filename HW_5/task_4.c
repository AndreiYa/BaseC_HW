#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    scanf("%d", &num);

    while(num > 0)
    {
        num = num/10;
        count ++;
    }
    printf(count == 3 ? "YES": "NO");

    return 0;
}

