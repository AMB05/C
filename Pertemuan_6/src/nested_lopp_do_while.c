#include <stdio.h>
#include <string.h>

int main() 
{
    char a[1000] = "";
    int baris = 1;
    int x;
    printf("Masukkan angka: ");
    scanf("%d", &x);
    // Looping Baris
    do {
        int kolom = baris;
        // Looping Kolom
        while (kolom > 0) {
            strcat(a, " * ");
            kolom = kolom - 1;
        }
        strcat(a, "\n");
        baris = baris + 1;
    } while (baris <= x);
    printf("%s", a);
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     int i = 10;
//     int j;
//     do 
//     {
//         j=1;
//         do
//         {
//             printf("%d ", i*j, " \n"); //perhatikan spasi
//             j++;
// 	    }
// 	    while (j<=i);
// 	    printf("\n");
//     i--;
//     }
//     while(i>=1);
// }

