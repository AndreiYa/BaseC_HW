#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt", "w");
    char c;

    while ((c=fgetc(input)) != EOF && c != '\n')
    {
        switch (c)
        {
            case 'A':
                c = 'B';
                fprintf (output, "%c", c);
                break;
            case 'B':
                c = 'A';
                fprintf (output, "%c", c);
                break;
            case 'a':
                c = 'b';
                fprintf (output, "%c", c);
                break;
            case 'b':
                c = 'a';
                fprintf (output, "%c", c);
                break;
            default :
                fprintf (output, "%c", c);
                break;
        }
    }

    fclose(input);
    fclose(output);
    return 0;
}