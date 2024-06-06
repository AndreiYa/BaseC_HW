#include <stdio.h>
#include <string.h>

int main()
{
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt", "w");
    char c;
    char res[1001];
    int i=0;
    int flag=0;

    while ((c=fgetc(input)) != EOF)
    {
        if((c >= 'A' && c <='Z') || (c >= 'a' && c <='z'))
        {
            for(int j = 0; j < i; j++)
            {
                if(c == res[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag == 0)
            {
                res[i++]=c;
            }
            flag=0;
        }
    }
    res[i] = '\0';
    fprintf(output, "%s", res);

    fclose(input);
    fclose(output);
    return 0;
}