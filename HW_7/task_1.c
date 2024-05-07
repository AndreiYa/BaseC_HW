#include <stdio.h>

int rec(int n);

int main() {
    int n;
    scanf("%d", &n);

    rec(n);

    return 0;
}

int rec(int n)
{
    if(n>1)
    {
        rec(n-1);
    }
    printf("%d ", n);
}
