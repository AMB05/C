#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[100];
    int len = 0;

    printf("Enter the user name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name) - 1; //subtract 1 because '\n' is included in the string

    printf("char = %d\n", len);
    printf("name = %s", name);

    return (0); 
}


