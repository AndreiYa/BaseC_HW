#include <stdio.h>

int main(void)
{
	int a,b,c,d,e;
    int max = 0;
    
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    int arr[] = {a,b,c,d,e};
    
    for(int i=0; i < 5; i++) 
    {
        if(max < arr[i])
            max = arr[i];
    }
    
    printf("%d", max);
    
	return 0;
}
