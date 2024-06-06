#include <stdio.h>
#include <string.h>

int is_palindrom(char str[]);

int main()
{
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt", "w");
    char str[1001]={'\0'};

    fscanf (input, "%s", str);
    fprintf(output, "%s", is_palindrom(str) ? "YES": "NO");

    fclose(input);
    fclose(output);
    return 0;
}

int is_palindrom(char str[])
{
    int size = strlen(str);
    for (int i=0; i<size/2; i++)
    {
        if (str[i] != str[size-1-i])
        {
            return 0;
        }
    }
    return 1;
}