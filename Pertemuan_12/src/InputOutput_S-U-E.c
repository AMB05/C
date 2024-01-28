#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Mendefinisikan enum untuk kendaraan
typedef enum {
    Motor,
    Mobil
} Kendaraan;

// Mendefinisikan struct data
typedef struct {
    char nama[50];
    Kendaraan kendaraan;
} Data;

// Mendefinisikan union dengan member pointer
typedef union {
    char *plat;
} DetailData;

// Fungsi untuk inisialisasi struct Data
void inisialisasiData(Data *data, const char *nama, Kendaraan jenis) {
    snprintf(data->nama, sizeof(data->nama), "%s", nama);
    data->kendaraan = jenis;
}

// Fungsi untuk inisialisasi union DetailData
void inisialisasiDetailData(DetailData *detail, const char *plat) {
    // Mengalokasikan memori untuk plat
    detail->plat = malloc(strlen(plat) + 1);
    strcpy(detail->plat, plat);
}

// Fungsi untuk membersihkan memori yang dialokasikan
void hapusDetailData(DetailData *detail) {
    free(detail->plat);
}

// Fungsi untuk mencetak informasi Data
void cetakData(Data *data, DetailData *detail) {
    printf("\nInformasi Parkir:\n");
    printf("Nama: %s\n", data->nama);
    printf("Jenis Kendaraan: %s\n", data->kendaraan == Motor ? "Motor" : "Mobil");
    printf("Plat Kendaraan: %s\n", detail->plat);
}

int main() {
    // Membuat objek struct Data dan union DetailData
    Data data;
    DetailData detailData;

    // Input data dari pengguna
    char nama[50];
    int Kendaraan;
    char plat[100];

    printf("Masukkan nama: ");
    scanf("%s", nama);
    printf("Masukkan jenis kendaraan \n(0 untuk Motor, 1 untuk Mobil): ");
    scanf("%d", &Kendaraan);
    printf("Masukkan plat kendaraan: ");
    scanf("%s", plat);

    // Inisialisasi struct dengan input dari pengguna
    inisialisasiData(&data, nama, Kendaraan == 1 ? Motor : Mobil);
    // Inisialisasi union dengan input dari pengguna
    inisialisasiDetailData(&detailData, plat);
    // Menampilkan informasi Data
    cetakData(&data, &detailData);
    // Membersihkan memori yang dialokasikan
    hapusDetailData(&detailData);

    return 0;
}

