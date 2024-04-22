#include <stdio.h>

int main(void)
{
    int num;
    int swap = 0;
    int sum = 0;
    scanf("%d", &num);


    while(1)
    {
        swap = num % 10;
        sum += swap;
        num /= 10;
        if(num <=9)
        {
            sum += num;
            break;
        }

   }
    printf("%d", sum);

    return 0;
}



