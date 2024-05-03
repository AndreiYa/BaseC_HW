#include <stdio.h>

int f(int x);

int main(void)
{
    int x=1;
    int res=0;
    
    while(x!=0)
    {
        scanf("%d", &x);
        int s = f(x);
        if (s > res)
        {
            res = s;
        }
    }
    printf("%d", res);

    return 0;
}

int f(int x)
{
    if(x>=-2 && x<2)
    {
        return x*x;
    } else if(x>=2)
    {
        return (x*x)+(4*x)+5;
    } else if(x<-2)
    {
        return 4;
    }
}