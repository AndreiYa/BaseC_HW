#include <stdio.h>

void print_num(int n);

int main() {
    int n;
    scanf("%d", &n);
    print_num(n);
    return 0;
}

void print_num(int n)
{
    if(n > 0)
    {
        printf("%d ", n);
        print_num(n - 1);
    }
}
