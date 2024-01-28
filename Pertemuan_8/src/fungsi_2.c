#include <stdio.h>

double luas_persegi_panjang() //fungsi tanpa paramter
{
	int p=10, l=6;
	double luas = p * l;
	return luas; //nilai balik
}

int main()
{
    printf("Luas persegi panjang dengan panjang 10 dan lebar 6 adalah = \n");
    printf("%f", luas_persegi_panjang());
}


