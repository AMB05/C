#include <stdio.h>

// int faktorial (int x);

// fungsi menggunkan rekursif
int faktorial(int X) //fungsi dengan parameter
{
    if (X == 1) {
        return 1;
    }
    return X * faktorial(X - 1); // memanggil fungsi sebagai rekursif
}

int main() //fungsi utama
{
    int Bil, Hasil;
    printf("Masukkan bilangan yang akan di faktorial : ");
    scanf("%d", &Bil);

    Hasil = faktorial(Bil); //memanggil fungsi
    
    printf("%d! = %d\n", Bil, Hasil); //menampilkan hasil

    return 0;
}

// // Function definition
// int faktorial (int x) //fungsi dengan parameter
// {
//     int hasil = 1;
//     for (int C =1; C<=x; C++) {
//         hasil = hasil * C;
//     }
//     return hasil; //masih menggunakan nilai balik
// }

