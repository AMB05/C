#include <stdio.h>
#include <string.h>

int main() {
    int tgl, thn;
    char hari[20], bln[20], sdate[100];

    sprintf(sdate, "Jum'at 22 Desember 2023");
    sscanf(sdate, "%s %d %s %d", hari, &tgl, bln, &thn);

    printf("%d %s %d = %s\n", tgl, bln, thn, hari);
}

// int main() {
//     char string[100]; //deklarasi string
//     printf("Masukkan string: ");
//     //memanfaatkan fungsi fgets agar dapat menampung spasi
//     //dan juga buffer overflow pada string
//     fgets(string, sizeof(string), stdin); 
//     printf("String yang dimasukkan adalah: ");
//     //menampilkan isi string
//     fputs(string, stdout);
//     //digunakan untuk membersihkan buffer ouput 
//     fflush(stdout);

//     return 0;
// }



