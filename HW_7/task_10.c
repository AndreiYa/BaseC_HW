#include <stdio.h>

int is_prime(int n, int delitel);

int main() {
    int n, delitel;
    scanf("%d", &n);
    is_prime(n, 2) > 0 ? printf("NO") : printf("YES");
    return 0;
}

int is_prime(int n, int delitel)
{
    static int prime = 0;

    if (n == 2)
    {
        return 0;
    } else if (n <= 1)
    {
        return 1;
    }

    if (delitel < n)
    {
        (n % delitel) != 0 ? is_prime(n, delitel + 1) : prime++;
    }
    return prime;
}