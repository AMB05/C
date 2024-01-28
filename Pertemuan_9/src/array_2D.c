#include <stdio.h>

int main() {
    printf("Program Matrik\n");
    int matrik[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("Elemen ke %d,%d : ", (i+1), (j+1));
            scanf("%d", &matrik[i][j]);
        }
    }
    printf("\nMatrik Hasil : \n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%4d ", matrik[i][j]);
        }
        printf("\n");
    }
    return 0;
}


