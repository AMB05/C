#include <stdio.h>

int main()
{
    for(int t=1; t<=6; t++){
        //Menghitung Jumlah Tinggi Piramida
        
        for(int s=t; s<=6; s++){
            //Menghitung Jumlah Spasi per Baris
            printf(" ");
        }
        
        for(int b=0; b<=(t*2)-2; b++){
            printf("*");
        }
        printf("\n"); 
    }
}


// #include <stdio.h>

// int main()
// {
//     int x, y;
//     for (x = 0; x <= 5; x++){
//         for( y = 0; y <= 3; y++){
//             printf("Perulangan ke (%d, %d)\n", x, y);
//         }
//     }
// }



