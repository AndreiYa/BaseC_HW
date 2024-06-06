#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt", "w");
    char c;
    int capital=0;
    int lower=0;

    while ((c=fgetc(input)) != EOF && c != '\n')
    {
        if (c >= 'a' && c <= 'z')
        {
            lower++;
        }
        if (c >= 'A' && c <= 'Z')
        {
            capital++;
        }
    }

    fprintf(output, "%d %d", lower, capital);

    fclose(input);
    fclose(output);
    return 0;
}