// Taken from https://www.programiz.com/c-programming/c-strings
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    gets(name);     // read string
    printf("Name with puts: ");
    puts(name);    // display string
    printf("Name with printf: ");
    printf("%s",name);    // display string
    return 0;
}
