#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    if(num<10)
    {
        printf("NO");
        return 0;
    }

    while(num != 0)
    {
        int current;
        int prev;

        current = num % 10;
        prev = (num/10) % 10;

        num /= 10;

        if(current == prev)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}

