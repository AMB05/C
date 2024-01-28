#include <stdio.h>

int main()
{
   
    char a [ 15 ] = { 'C','O','M','P','U','T','E','R','\0'}; //cara 1

    char b [ 15 ] = "KOMPUTER" ;                             //cara 2

    char *c  = "komputer";                                   //cara 3

    printf("Output = %s\n", a);
    printf("Output = %s\n", b);
    printf("Output = %s\n", c);
}

