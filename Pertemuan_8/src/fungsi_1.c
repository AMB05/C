#include <stdio.h>

void bintang() //fungsi tanpa parameter
{
    int n;
    printf("Masukan panjang pola: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
    bintang();
    return 0;
}


