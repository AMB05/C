#include <stdio.h>

void persegi_panjang() //fungsi tanpa parameter tanpa nilai balik
{
    int p, l, hasil;
    printf("Input panjang = \n");
    scanf("%i", &p);
    printf("Input lebar = \n");
    scanf("%i", &l);

    hasil = p*l;

    printf("Hasil luas persegi panjang = %i ", hasil);
}




int main() //fungsi utama
{
    printf("Program Menghitung Luas Persegi Panjang\n");
    printf("---------------------------------------\n");
    
    persegi_panjang();  //melakukan pemanggilan fungsi pada program utama
    
    return 0;
}

