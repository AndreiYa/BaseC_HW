#include <stdio.h>

void recInv(int n);

int main() {
    int n;
    scanf("%d", &n);
    recInv(n);
    return 0;
}

void recInv(int n)
{
    if(n <= 9)
    {
        printf("%d", n);
    } else
    {
        printf("%d ", n%10);
        recInv(n/10);
    }
}
