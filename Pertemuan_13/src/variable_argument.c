#include <stdio.h>
#include <stdarg.h>

// Fungsi untuk menghitung rata-rata dari sejumlah angka
double hitung_rata_rata(int jumlah, ...) {
    va_list args, args_copy; //list argument
    va_start(args, jumlah); //start argument
    // Menyalin va_list untuk penggunaan berulang
    va_copy(args_copy, args);

    double sum = 0;
    for (int i = 0; i < jumlah; i++) {
        sum += va_arg(args, double);
    }
    va_end(args); //close argument

    // Menggunakan va_list_copy untuk menampilkan nilai kembali
    printf("Nilai kembali: ");
    for (int i = 0; i < jumlah; i++) {
        double value = va_arg(args_copy, double); //copy argument
        printf("%.2f ", value);
    }
    printf("\n");
    va_end(args_copy);//close argument

    return sum / jumlah;
}

int main() {
    // Memanggil fungsi dengan beberapa argumen
    double rata_rata1 = hitung_rata_rata(3, 2.5, 3.5, 4.5);
    double rata_rata2 = hitung_rata_rata(5, 1.0, 2.0, 3.0, 4.0, 5.0);
    // Menampilkan hasil
    printf("Rata-rata 1: %.2f\n", rata_rata1);
    printf("Rata-rata 2: %.2f\n", rata_rata2);

    return 0;
}

