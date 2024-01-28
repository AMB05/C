#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// membuat struct dengan member pointer
struct Mahasiswa {
    char *nama;
    int *kelas;
};

// membuat fungsi dengan parameter untuk inisialisasi alokasi struktur
void inisialisasiMahasiswa(struct Mahasiswa *mhs, const char *nama, int kelas) {
    // Mengalokasikan memori untuk membuat nilai pada nama
    mhs->nama = malloc(strlen(nama) + 1);
    strcpy(mhs->nama, nama);
    // Mengalokasikan memori untuk membuat nilai pada kelas
    mhs->kelas = malloc(sizeof(int));
    *(mhs->kelas) = kelas;
}

// membuat fungsi dengan parameter untuk membersihkan memori yang dialokasikan
void hapusMahasiswa(struct Mahasiswa *mhs) {
    free(mhs->nama);
    free(mhs->kelas);
}

// membuat fungsi dengan parameter untuk mencetak nilai struct
void cetakMahasiswa(struct Mahasiswa *mhs) {
    printf("Nama: %s\n", mhs->nama);
    printf("Kelas: 1A %d\n", *(mhs->kelas));
}

int main() {
    // deklarasi struct dengan variabel
    struct Mahasiswa mhs;

    char nama[50];
    int kelas;

    printf("Masukkan nama mahasiswa: ");//membuat input
    scanf("%s", nama);
    printf("Masukkan kelas mahasiswa: ");//membuat input
    scanf("%d", &kelas);

    // melakukan inisialisasi struct dari inputan
    // memanggil fungsi inisialisasi dengan parameter nilai pada inputan
    inisialisasiMahasiswa(&mhs, nama, kelas);
    // menampilkan ouput struktur
    printf("\nInformasi Mahasiswa:\n");
    cetakMahasiswa(&mhs);
    // Membersihkan memori yang dialokasikan
    hapusMahasiswa(&mhs);

    return 0;
}


