#include <stdio.h>

int main() {
    int baris;
    printf("Masukkan angka: ");
    scanf("%d", &baris);

    // Looping Baris
    while (baris >= 0) {
        int kolom = baris;

        // Looping Kolom
        while (kolom > 0) {
            printf(" * "); //perhatikan spasi
            kolom = kolom - 1;
        }

        printf("\n");
        baris = baris - 1;
    }
    return 0;
}



// #include <stdio.h>

// int main()
// {
//     int i,j;
//     printf("Input nilai i : \n");
//     scanf("%d", &i);
//     while (i <= 10) 
//     {
//         printf("\ni : %d\n", i);
//         j=i+1;
//         while (j <= 10)
//         {
//             printf("       j : %d\n", j);
//             j=j+1;
//         }

//         i=i+1;
//     }
// }

