#include <stdio.h>

void identitas();
int angka ();

int main() //fungsi utama
{
    printf("Hello World\n");
    angka();
    
    
}

void identitas() //fungsi identitas
{
    printf("\nNama saya adalah arriva\n");
}

int angka ()
{
    int a=1, b=2, c=3;
    printf("\nAngka yang saya ketik adalah %d", a);
    printf("\nAngka yang saya ketik adalah %d", b);
    printf("\nAngka yang saya ketik adalah %d", c);

}

// void function (char a, int b, float c, double d)
// {
//     printf("%c\n", a);
//     printf("%i\n", b);
//     printf("%f\n", c);
//     printf("%d\n", d);
// }