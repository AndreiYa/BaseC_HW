#include <stdio.h>

int main(void)
{
	int a,b;

    scanf("%d %d", &a,&b);
    
    if (a > b)
    {
        int swap;
        swap = a;
        a = b;
        b = swap;
    }
    
    printf("%d %d\n", a,b);
    
	return 0;
}

