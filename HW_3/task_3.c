#include <stdio.h>

int main(void)
{
    float a, b, c;
    float res;
    
    scanf("%f %f %f", &a,&b,&c);
    
    res = (a+b+c)/3;
    
    printf("%.2f\n", res);
    
    return 0;
}

