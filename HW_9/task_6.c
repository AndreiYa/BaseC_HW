#include <stdio.h>
int is_two_same(int size, int a[]);

int main(void)
{
    int a[5]={1,4,2,5,1};
    printf("%d", is_two_same(5, a));
    return 0;
}

int is_two_same(int size, int a[])
{
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
}