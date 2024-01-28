#include <stdio.h>

int main()
{
    int n;
    
    printf("input jumlah perulangan yang ingin diinginkan: ");
    scanf("%d", &n);

    int angka[n];

    //melakukan input data
    for (int i=0; i<n; i++) 
    {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &angka[i]);
    }

    //melakukan output data
    printf("\n\nData angka yang diinput : \n");
    for (int i=0; i<n; i++) 
    {
        printf("%d \n", angka[i]);
    }

    return 0;
}