#include <stdio.h>

int sum_digits(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum_digits(n));
    return 0;
}

int sum_digits(int n)
{
    static int sum;
    sum += n % 10;
    n /= 10;

    return n != 0 ? sum_digits(n) : sum;
}
