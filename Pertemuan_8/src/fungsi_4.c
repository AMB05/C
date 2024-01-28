#include <stdio.h>

int tambah(int a, int b){ //fungsi tambah parameter int a dan b
    int hasil = a+b;
    return hasil; //nilai balik
}

int kurang(int a, int b){ //fungsi kurang parameter int a dan b
    int hasil = a-b;
    return hasil; //nilai balik
}

int kali(int a, int b){ //fungsi kali parameter int a dan b
    int hasil = a*b;
    return hasil; //nilai balik
}

double bagi(int a, int b){ //fungsi bagi parameter int a dan b
    double hasil = a/b;
    return hasil; //nilai balik
}

int main () //fungsi utama
{
    float a,b;
    int pilihan;
    printf("Program Kalkulator Sederhana\n");
    printf("----------------------------\n");
    printf("Input bilangan pertama : ");
    scanf("%f", &a);
    printf("Input bilangan kedua : ");
    scanf("%f", &b);
    printf("\nPilihan Operasi:\n1. Tambah \n2. Kurang \n3. Kali \n4. Bagi");
    
    printf("\nMasukkan angka operasi yang ingin dijalankan: ");
    scanf("%i",&pilihan);
    if (pilihan == 1) {
        printf("Hasil = %i", tambah(a,b)); //memanggil fungsi dengan parameter a & b
    } 
    else if (pilihan == 2) {
        printf("Hasil = %i", kurang(a,b)); //memanggil fungsi dengan parameter a & b
    }
    else if (pilihan == 3) {
        printf("Hasil = %i", kali(a,b)); //memanggil fungsi dengan parameter a & b
    }
    else if (pilihan == 4) {
        printf("Hasil = %f", bagi(a,b)); //memanggil fungsi dengan parameter a & b
    }
    else
    {
        printf("\nSALAH INPUT");
    }
    
    return 0;
}


