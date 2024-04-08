#include <stdio.h>

int main(void)
{
	int a,b,c,d,e;
    
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    int arr[] = {a,b,c,d,e};
    int min = arr[0];
    
    for(int i=0; i < 5; i++) 
    {
        if(min > arr[i])
            min = arr[i];
    }
    
    printf("%d", min);
    
	return 0;
}
