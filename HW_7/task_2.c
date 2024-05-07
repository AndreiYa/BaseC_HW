#include <stdio.h>

int rec(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", rec(n));
    return 0;
}

int rec(int n)
{
    static int sum=0;
    if(n>0)
    {
        sum+=n;
        rec(n-1);
    }
    return sum;
}
