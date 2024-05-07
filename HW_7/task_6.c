#include <stdio.h>

void reverse_string();

int main() {
    reverse_string();
    return 0;
}

void reverse_string()
{
    char c;
    scanf("%c", &c);
    
    if(c != '.')
    {
        reverse_string();
        printf("%c", c);
    }
}