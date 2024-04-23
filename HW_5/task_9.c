#include <stdio.h>

int main(void)
{
    int num;
    int f = 0;
    int counter = 0;
    scanf("%d", &num);

    while(num != 0)
    {
        int current;
        current = num % 10;
        num /= 10;

        if(current % 2 == 0)
        {
            f++;
        }
        counter++;
    }

    f == counter ? printf("YES") : printf("NO");
    return 0;
}
