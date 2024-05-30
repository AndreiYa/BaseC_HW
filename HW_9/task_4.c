#include <stdio.h>
#include <string.h>

void print_digit(char s[]);
int main(void)
{
    print_digit("9Lorem ipsum dolor sit amet, consectetur adipiscing elit  Nulla placerat, nulla sed dignissim tincidunt, eros libero rhoncus arcu, quis egestas sapien sapien ut ipsum  Cras vel sapien feugiat, pharetra lacus quis, suscipit eros  Mauris ut fringilla nisl  Integer eu vehicula elit, sed pulvinar ante  Vivamus imperdiet sapien vel risus iaculis, et tristique nulla placerat  Etiam venenatis urna non neque molestie auctor  Curabitur massa tortor, elementum eu pulvinar vel, suscipit in neque  Ut faucibus vulputate pulvinar  In a sollicitudin arcu  Quisque interdum efficitur quam nec congue  Sed eget feugiat ligula, in dapibus nisl  Maecenas sed ultricies justo  Pellentesque rutrum libero at erat accumsan, non malesuada nisi feugiat  Curabitur eget orci cursus, commodo metus sit amet, varius tortor  Duis fermentum libero non dapibus lobortis Integer ac nulla purus  Aliquam euismod, mi id cursus luctus, orci lorem laoreet lectus, id mollis tellus mi quis sem  Mauris tincidunt nec tellus eget mattis  Maecenas consectetur ullamcorper purus, gravida iaculis erat facilisis sit amet  Nullam non elit justo  Fusce mollis molestie suscipit  Nam fermentum euismod dictum  Proin rutrum commodo mattis Nam in pulvinar eros, eu hendrerit leo  Praesent molestie et mauris et pellentesque  Suspendisse eu pulvinar metus  Aenean non est neque  Vivamus non hendrerit neque, eu pretium metus  Curabitur mollis id sem ut laoreet  Vestibulum odio odio, varius a magna sed, elementum laoreet lorem  Maecenas urna sapien, rhoncus id purus nec, maximus maximus mi  Suspendisse suscipit congue lorem vel mollis  Nullam bibendum metus nec consequat 9finibus  Suspendisse nec ante eget lectus laoreet dapibus  Donec eget lacinia nulla  Morbi justo eros, commodo a nibh non, lacinia molestie nisl  Proin semper, neque at pulvinar vestibulum, justo diam pharetra lorem, non consequat augue sem sit amet ex Phasellus erat eros, interdum ut augue ut, blandit imperdiet neque  Vivamus efficitur libero vel varius cras amet9.");
    return 0;
}

void print_digit(char s[])
{
    int result[10]={0};

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            result[s[i]-'0']++;
        }
    }

    for(int i = 0; i<10; i++)
    {
        if(result[i] != 0)
        {
            printf("%d %d\n", i, result[i]);
        }
    }
}