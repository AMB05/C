#include <stdio.h>
#include <stdarg.h>

// Fungsi untuk menghitung jumlah dan rata-rata argumen
void calculate(int num, ...) 
{
    //membuat va_list
    va_list args, args_copy;
    //va_list untuk memulai akses argumen
    va_start(args, num);
    // Menyalin va_list untuk penggunaan berulang
    va_copy(args_copy, args);

    double sum = 0;
    for (int i = 0; i < num; i++) {
        //mengakses fungsi variadik berikutnya
        double value = va_arg(args, double); 
        sum += value;
    }

    va_end(args); //menutup argumen

    double average = sum / num;

    // Menampilkan jumlah dan rata-rata
    printf("Jumlah: %.2f\n", sum); 
    printf("Rata-rata: %.2f\n", average);
    // Menggunakan va_list_copy untuk menampilkan nilai kembali
    printf("Nilai kembali: ");
    for (int i = 0; i < num; i++) {
        //mengakses fungsi variadik berikutnya (va_list copy)
        double value = va_arg(args_copy, double);
        printf("%.2f ", value);
    }
    printf("\n");
    va_end(args_copy);//menutup argumen
}

int main() {
    // Memanggil fungsi dengan argumen berbeda
    printf("Memanggil fungsi dengan argumen pertama :",
            "3, 2.5, 3.5, 4.5\n");
    calculate(3, 2.5, 3.5, 4.5);
    printf("\n");
    printf("Memanggil fungsi dengan argumen pertama :",
            "4, 1.0, 2.0, 3.0, 4.0\n");
    calculate(4, 1.0, 2.0, 3.0, 4.0);

    return 0;
}

