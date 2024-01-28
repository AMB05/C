#include <stdio.h>

enum bulan { //enumerasi
    JAN = 1, //memulai anggota enumerasi dari 1
    PEB, MAR, APR, MEI, JUN, 
    JUL, AGU, SEP, OKT, NOP, DES
    };

int main() {
    enum bulan Bulan; //deklarasi enumerasi dengan variabel Bulan
    //menampung data anggota dengan array pointer
    char *namaBulan[] = {"", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
                         "Agustus", "September", "Oktober", "November", "Desember" };

    //membuat perulangan untuk menampilkan semua data anggota
    for (Bulan = JAN; Bulan <= DES; Bulan++)
        printf("Bulan ke - %d %s\n", Bulan, namaBulan[Bulan]);

    return 0;
}


