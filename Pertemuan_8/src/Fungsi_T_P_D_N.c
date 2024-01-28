#include <stdio.h>

int fpb(); //membuat fungsi

int main () //fungsi utama
{
    printf("Hasil FPB dari 24 dan 18 adalah \n");
	printf("%i", fpb());
	
}

int fpb () //fungsi tanpa paramter dengan nilai balik
{
	int a=24, b=18, hasil;
	int r = a%b;
	if(r==0)
	{
		hasil=b;
	}
	else
	{
		while (r!=0)
		{
			a=b;
			b=r;
			r=a%b;
			hasil=b;
		}
	}
	return (hasil); //nilai balik
}


