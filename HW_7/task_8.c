#include <stdio.h>

void print_num(int a, int b);

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    print_num(a,b);
    return 0;
}

void print_num(int a, int b)
{
    printf("%d ", a);
    
    if(a>b && a!=b)
    {
        print_num(a-1,b);
    }
    if(a<b && a!=b)
    {
        print_num(a+1,b);
    }
}