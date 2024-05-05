#include <stdio.h>

int is_prime(int n);

int main() {
    int num;
    scanf("%d", &num);
    
    is_prime(num) == 1 ? printf("YES") : printf("NO");

    return 0;
}

int is_prime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    
    int d = 2;
    
    while(n % d != 0)
    {
        d++;
    }
    
    return d == n ? 1 : 0;
}
