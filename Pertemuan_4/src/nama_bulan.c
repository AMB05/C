#include <stdio.h>

int main()
{
    int nomor_bulan;
    printf ("Masukkan Angka Bulan (1-12) : ");
    scanf ("%d", &nomor_bulan);

    if (nomor_bulan == 1)
    {
      printf ("Januari \n");
    }
    else if (nomor_bulan == 2)
    {
      printf ("Februari \n");
    }
    else if (nomor_bulan == 3)
    {
      printf ("Maret \n");
    }
    else if (nomor_bulan == 4)
    {
      printf ("April \n");
    }
    else if (nomor_bulan == 5)
    {
      printf ("Mei \n");
    }
    else if (nomor_bulan == 6)
    {
      printf ("Juni \n");
    }
    else if (nomor_bulan == 7)
    {
      printf ("Juli \n");
    }
    else if (nomor_bulan == 8)
    {
      printf ("Agustus \n");
    }
    else if (nomor_bulan == 9)
    {
      printf ("September \n");
    }
    else if (nomor_bulan == 10)
    {
      printf ("Oktober \n");
    }
    else if (nomor_bulan == 11)
    {
      printf ("November \n");
    }
    else if (nomor_bulan == 12)
    {
      printf ("Desember \n");
    }
    else
    {
      printf ("Bukan Bulan Yang Benar \n");
    }
}

