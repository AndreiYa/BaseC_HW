#include <stdio.h>

int is_happy_number(int n);

int main() {
    int num;
    scanf("%d", &num);

    is_happy_number(num) == 1 ? printf("YES") : printf("NO");

    return 0;
}

int is_happy_number(int n)
{
    int sum = 0;
    int prod = 1;

    while(n > 0)
    {
        sum += n%10;
        prod *= n%10;
        n /= 10;
    }

    return sum == prod ? 1 : 0;
}
