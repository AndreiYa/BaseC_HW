#include <stdio.h>

int main(void)
{
    int num;
    int res = 9;
    int f = 0;
    scanf("%d", &num);

    if(num<10 && num != res)
    {
        printf("NO");
        return 0;
    }

    while(num != 0)
    {
        int current;
        current = num % 10;
        num /= 10;

        if(current == res)
        {
            f++;
        }
    }
    f == 1 ? printf("YES") : printf("NO");
    return 0;
}
