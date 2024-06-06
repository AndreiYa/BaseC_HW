#include <stdio.h>
enum {SIZE = 1001};

int main(void)
{
    FILE *input = fopen("input.txt", "r");
    char c;
    int counter = 0;
    char str[SIZE];
    char last;

    while ((c=fgetc(input))!=EOF && c !='\n')
    {
        str[counter++] = c;
    }
    str[counter] = '\0';
    last = str[counter-1];

    FILE *output = fopen("output.txt", "w");
    for (int i = 0; i < counter-1; i++)
    {
        if (str[i] == last)
        {
            fprintf(output, "%d ", i);
        }

    }
    fclose(input);
    fclose(output);
    return 0;
}