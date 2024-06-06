#include <stdio.h>

int main()
{
    FILE *input=fopen("input.txt","r");
    int length;
    fscanf (input, "%d", &length);
    fclose (input);

    char c = 'A';
    char str[length];
    char counter='0';

    for (int i = 1; i <= length; i++)
    {
        if (i%2 != 0)
        {
            str[i-1] = c++;
        }
        else
        {
            counter += 2;
            str[i-1] = counter;
            if (counter == '8')
            {
                counter = '0';
            }
        }
    }
    str [length] = '\0';
    FILE *output = fopen ("output.txt", "w");
    fprintf (output, "%s", str);
    fclose(output);
    return 0;
}
