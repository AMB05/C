#include <stdio.h>

int main() {
    // Variabel untuk menyimpan data
    int nilai1, nilai2;
    char karakter[50];
    // Meminta pengguna memasukkan data
    printf("Masukkan nilai 1: ");
    scanf("%d", &nilai1);
    printf("Masukkan nilai 2: ");
    scanf("%d", &nilai2);
    printf("Masukkan karakter: ");
    scanf("%s", karakter);
    // pengoperasian file fopen
    FILE *fileOutput = fopen("data.txt", "w");
    if (fileOutput != NULL) {
        fprintf(fileOutput, "Nilai 1: %d\n", nilai1);
        fprintf(fileOutput, "Karakter: %s\n", karakter);
        fprintf(fileOutput, "Nilai 2: %d\n", nilai2);
        
        fclose(fileOutput); //menutup file
        printf("Data telah ditulis ke dalam berkas 'data.txt'.\n");
    } else {
        printf("Error: Tidak dapat membuka berkas untuk penulisan.\n");
        return 1; // Mengembalikan nilai 1 menandakan kesalahan
    }
    // Membaca data dari berkas
    FILE *fileInput = fopen("data.txt", "r");
    if (fileInput != NULL) {
        int baca_nilai1, baca_nilai2;
        char baca_karakter[50];

        fscanf(fileInput, "Nilai 1: %d", &baca_nilai1);
        fscanf(fileInput, "karakter: %s", baca_karakter);
        fscanf(fileInput, "Nilai 2: %d", &baca_nilai2);
        fclose(fileInput);//menutup file
        // Menampilkan data yang dibaca dari berkas
        printf("\nData yang dibaca dari berkas:\n");
        printf("Nilai 1: %d\n", baca_nilai1);
        printf("Nilai 2: %d\n", baca_nilai2);
        printf("karakter: %s\n", baca_karakter);
    } else {
        printf("Error: Tidak dapat membuka berkas untuk membaca.\n");
        return 1; // Mengembalikan nilai 1 menandakan kesalahan
    }
    return 0;
}


