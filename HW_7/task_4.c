#include <stdio.h>

void print_num(int num);

int main() {
    int n;
    scanf("%d", &n);
    print_num(n);
    return 0;
}

void print_num(int num)
{
    if (num<=9)
    {
        printf("%d ", num);
    } else
    {
        print_num(num/10);
        printf("%d ", num%10);
    }
}
