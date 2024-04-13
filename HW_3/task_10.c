#include <stdio.h>

int main(void)
{
    int digit;

    scanf("%d", &digit);
    
    int d_1 = digit/100;
    int d_2 = (digit % 100)/10;
    int d_3 = digit % 10;
    
    printf("%d\n", d_1 + d_2 + d_3);
    return 0;
}

