#include <stdio.h>
#include <math.h>

int main() {
    int pilih, pilihan;
    double hasil, sisi, panjang, lebar, jariJari;

    printf("Program Menghitung Bangun Datar\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("Pilih Bangung Datar: ");
    scanf("%d", &pilih);

    switch (pilih) {
        case 1: 
            printf("\nMenghitung Luas dan Keliling\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan : ");
            scanf("%i", &pilihan);
            if (pilihan == 1)
            {
                printf("\ninput sisi persegi: ");
                scanf("%lf", &sisi);
                hasil = sisi * sisi;
                printf("\nLuas persegi: %lf\n", hasil);
            }
            else if (pilihan == 2)
            {
                printf("\ninput sisi persegi: ");
                scanf("%lf", &sisi);
                hasil = 4 * sisi;
                printf("\nKeliling persegi: %lf\n", hasil);
            }
            else
            {
                printf("\nSalah input! \n");
            }
        break;
        case 2: 
            printf("\nMenghitung Luas dan Keliling\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan : ");
            scanf("%i", &pilihan);
            if (pilihan == 1)
            {
                printf("\ninput panjang: ");
                scanf("%lf", &panjang);
                printf("\ninput lebar: ");
                scanf("%lf", &lebar);
                hasil = panjang * lebar;
                printf("\nLuas persegi panjang: %lf\n", hasil);
            }
            else if (pilihan == 2)
            {
                printf("\ninput panjang: ");
                scanf("%lf", &panjang);
                printf("\ninput lebar: ");
                scanf("%lf", &lebar);
                hasil = 2 * (panjang + lebar);
                printf("\nKeliling persegi panjang: %lf\n", hasil);
            }
            else
            {
                printf("Salah input! \n");
            }
        break;
        case 3: 
            printf("\nMenghitung Luas dan Keliling\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan : ");
            scanf("%i", &pilihan);
            if (pilihan == 1)
            {
                printf("\ninput jari-jari lingkaran: ");
                scanf("%lf", &jariJari);
                hasil = 3.14 * pow(jariJari, 2);
                printf("\nLuas lingkaran: %lf\n", hasil);
            }
            else if (pilihan == 2)
            {
                printf("\ninput jari-jari lingkaran: ");
                scanf("%lf", &jariJari);
                hasil = 2 * 3.14 * jariJari;
                printf("\nKeliling lingkaran: %lf\n", hasil);
            }
            else
            {
                printf("Salah input! \n");
            }
        break;
        default:
            printf("Pilihan salah!\n");
        break;
    }

    return 0;
}

