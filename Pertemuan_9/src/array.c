// #include <stdio.h>

// //tanpa array
// int main() {
//     float nilai1, nilai2, nilai3, nilai4, nilai5;
//     float jumlah, rata2;
//     printf("Program Menghitung Nilai Rata-rata\n");
//     printf("Masukkan nilai ke 1 : ");
//     scanf("%f", &nilai1);
//     printf("Masukkan nilai ke 2 : ");
//     scanf("%f", &nilai2);
//     printf("Masukkan nilai ke 3 : ");
//     scanf("%f", &nilai3);
//     printf("Masukkan nilai ke 4 : ");
//     scanf("%f", &nilai4);
//     printf("Masukkan nilai ke 5 : ");
//     scanf("%f", &nilai5);
//     jumlah = nilai1 + nilai2 + nilai3 + nilai4 + nilai5;
//     rata2 = jumlah / 5;
//     printf("Nilai rata-rata adalah %.2f\n", rata2);
//     return 0;
// }
#include <stdio.h>
int main() {
    float nilai[5];
    float jumlah, rata2;
    int i;
    printf("Program Menghitung Nilai Rata-rata\n");
    for(i=0; i<5; i++)
    {
        printf("Masukkan nilai ke %d : ", (i+1));
        scanf("%f", &nilai[i]);
    }
    jumlah = 0;
    for(i=0; i<5; i++)
    {
        jumlah = jumlah + nilai[i];
    }
    rata2 = jumlah / 5;
    printf("Nilai rata-rata adalah %.2f\n", rata2);
    return 0;
}