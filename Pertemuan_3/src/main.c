#include <stdio.h>

int main()
{
    // algoritma urutan
    int num1, num2, hasil;              //Deklarasi variabel int num1, num2, hasil

    printf("Input bilangan pertama: "); //Masukkan bilangan 1 
    scanf("%d", &num1);                 //pembaca masukan
    printf("Input bilangan kedua : ");  //Masukkan bilangan 2
    scanf("%d", &num2);                 //pembaca masukan

    hasil = num1 + num2;                // proses

    printf("Hasil penjumlahan Bilangan Ke-1 dan Bilangan Ke-2 = %d\n", hasil); //output

    return 0; //selesai

    
    // printf("Hello World");
}

