#include <stdio.h>

int main()
{
    char a;                                 // variabel a dengan tipe data karakter
    char b = '1';                           //nilai angka yang bersifat karakter
    char c = '&';                           //nilai simbol yang bersifat karakter

    printf("input karakter = ");
    scanf("%c", &a);                         //%c untuk pembacaan nilai karakter
    printf("inputan karakter adalah %c", a);//%c untuk menampilkan nilai karakter
    return 0;


}

