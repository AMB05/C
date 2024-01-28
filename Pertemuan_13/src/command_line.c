#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <angka1> <angka2> ... <angkaN>\n", argv[0]);
        return 1;
    }
    // Menginisialisasi variabel untuk menghitung jumlah dan rata-rata
    double sum = 0;
    int count = 0;
    // Menggunakan loop untuk mengakses dan 
    // Menghitung angka-angka dari command line arguments
    for (int i = 1; i < argc; i++) {
        char *endptr;
        double angka = strtod(argv[i], &endptr);
        // Memeriksa apakah konversi berhasil
        if (*endptr == '\0') {
            sum += angka;
            count++;
        } else {
            printf("Error: '%s' bukan angka valid.\n", argv[i]); //jika tidak maka eror
        }
    }
    // Menghitung rata-rata dan menampilkan hasil
    if (count > 0) {
        //menghitung nilai arguments
        double rata_rata = sum / count;
        printf("Jumlah: %.2f\n", sum);
        printf("Rata-rata: %.2f\n", rata_rata);
    } else {
        printf("Tidak ada angka valid untuk dihitung.\n");
    }

    return 0;
}


