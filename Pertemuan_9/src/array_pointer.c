#include <stdio.h>
#include <ctype.h>

//menggunakan pointer
int main()
{
    char str [80];
    char *p; //pointer
    printf("Input String = \n");
    gets(str);
    printf("String Kapital\n");
    p = str; //menampung nilai array str pada pointer p
    while (*p)
    {
        printf("%c", toupper(*p)); //memanggil pointer
        p++;
    }
}

//tanpa pointer
int main()
{
    char str [80];
    int i;
    
    printf("Input String = \n");
    gets(str);
    printf("String Kapital\n");
    for (i=0; str[i]; i++)
    {
        printf("%c", toupper(str[i])); //memanggil array
    }
}

