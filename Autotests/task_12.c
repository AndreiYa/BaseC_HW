#include <stdio.h>

int main(void)
{
	int digit;

    scanf("%d", &digit);
    
    int d_1 = digit/100;
    int d_2 = (digit % 100)/10;
    int d_3 = digit % 10;
    
    int arr[] = {d_1,d_2,d_3};
    int length = sizeof(arr)/sizeof(arr[0]);
    int max = 0;
    
    for(int i=0; i < length; i++) 
    {
        if(max < arr[i])
            max = arr[i];
    }
    
    printf("%d\n", max);
	return 0;
}
