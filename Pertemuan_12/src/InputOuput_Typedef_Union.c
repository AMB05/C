#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// membuat union dengan member pointer
typedef union {
    char *nama;
    int *umur;
} Mahasiswa;

// membuat fungsi dengan parameter untuk inisialisasi alokasi union
void inisialisasiMahasiswa(Mahasiswa *mhs, const char *nama, int umur) {
    // Mengalokasikan memori untuk membuat nilai pada nama
    mhs->nama = malloc(strlen(nama) + 1);
    strcpy(mhs->nama, nama);
    printf("Nama: %s\n", mhs->nama); //output akses nilai union pointer nama
    // Mengalokasikan memori untuk membuat nilai pada umur
    mhs->umur = malloc(sizeof(int));
    *(mhs->umur) = umur;
    printf("Umur: %d tahun\n", *(mhs->umur)); //output akses nilai union pointer umur
}

// membuat fungsi dengan parameter untuk membersihkan memori yang dialokasikan
void hapusMahasiswa(Mahasiswa *mhs) {
    free(mhs->nama);
    free(mhs->umur);
}

int main() {
    // mendeklarasikan union
    Mahasiswa mhs;

    char nama[50];
    int umur;

    printf("Masukkan nama mahasiswa: "); //membuat input
    scanf("%s", nama);
    printf("Masukkan umur mahasiswa: "); //membuat input
    scanf("%d", &umur);

    // melakukan inisialisasi struct dari inputan
    // memanggil fungsi inisialisasi dengan parameter nilai pada inputan
    // dan menampilkan output union
    printf("\nInformasi Mahasiswa:\n");
    inisialisasiMahasiswa(&mhs, nama, umur);
    // Membersihkan memori yang dialokasikan
    hapusMahasiswa(&mhs);

    return 0;
}
