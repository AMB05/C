#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Kalkulator Sederhana");  

    int a, b, c, d, hasil;    

    printf("\n\nMasukkan nilai a = ");     
    scanf("%i ",&a);     
    printf("\nMasukkan nilai b = ");     
    scanf("%i ",&b);   
    printf("\nMasukkan nilai c = ");
    scanf("%i ",&c); 
    printf("\nMasukkan nilai d = "); 
    scanf("%i ",&d); 
    printf("\nnilai a = %i, b = %i, c = %i, d = %i", a, b, c, d);   

    printf("\n\nHasil Perhitungan:");      
    hasil = a + b;     
    printf("\nHasil dari: a + b adalah %d\n", hasil);     
    hasil = c - d;     
    printf("\nHasil dari: c - d adalah %d\n", hasil);     
    hasil = b * c;     
    printf("\nHasil dari: b * c adalah %d\n", hasil);     
    hasil = a / d;     
    printf("\nHasil dari: a / c adalah %d\n", hasil);     
    hasil = a + b * c - d;     
    printf("\nHasil dari: a + b * c - d adalah %d\n", hasil);     
    hasil = a * b + c / d;     
    printf("\nHasil dari: a * b + c / d adalah %d\n", hasil);      
    
    getch();
}
    // int a,b,c;          //a,b,c adalah variabel
    // char nama, prodi;   // nama dan prodi adalah variabel

    // int num = 10;       //int tipe data, num variabel, '=' operator, 10 value

    // int number;         //deklarasi
    // number = 11;

    // char nama = 'arriva';

    // char name;
    // name = 'Rival';

    // c = 1; // statement untuk membuat variabel x
    // printf("Hello World"); // statement untuk menampilkan teks kelayar

    // char huruf;
    // int angka; 

    // angka = 10; //assignment

    // a += 5;
    // a -= 5;
    // a *= 5;
    // a /= 5;

    // b + 1; // ekspresi menjumlahakan x dengan 1
    // 3 * 3; // ekspresi 3 * 3
    // sqrt(25); // eskpresi untuk menghitung akar kuadrat

    // int var = 4 + 2;  //statement dan ekspresi
// }

