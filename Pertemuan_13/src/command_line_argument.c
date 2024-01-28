#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // memastikan jumlah argumen sesuai
    if (argc != 3) {
        printf("Usage: %s <angka1> <angka2>\n", argv[0]);
        return 1;  // Mengembalikan nilai 1 menandakan kesalahan
    }

    // Konversi argumen menjadi angka dengan atoi
    int angka1 = atoi(argv[1]);
    int angka2 = atoi(argv[2]);

    // Melakukan operasi penjumlahan
    int hasil = angka1 + angka2;
    // Menampilkan hasil
    printf("Hasil penjumlahan dari %d dan %d adalah %d\n", angka1, angka2, hasil);

    return 0;
}
