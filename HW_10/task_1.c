#include <stdio.h>
#include <string.h>
enum {SIZE = 101};

int main(void)
{
    FILE *input = fopen("input.txt", "r");
    if (input == NULL)
    {
        printf("read file error\n");
        fclose(input);
        return 1;
    }

    char str[SIZE];
    FILE *output = fopen("output.txt", "w");

    if (output == NULL)
    {
        printf("write file error\n");
        fclose(input);
        fclose(output);
        return 1;
    }

    if (fgets(str, sizeof(str), input) != NULL)
    {
        str[strcspn(str, "\n")] = 0;
        fprintf(output, "%s, %s, %s %d\n", str, str, str, strlen(str));
        fclose(input);
        fclose(output);
    }

    return 0;
}


