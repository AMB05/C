#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum week //enumerasi
{
    Minggu=1, Senin=2, Selasa=3, Rabu=4, Kamis=5, Jumat=6, Sabtu=7,
};

int main()
{
    //pendeklarasian enumerasi
    enum week day;
    //pengaksesan nilai anggota enumerasi
    day = Senin;

    printf("%d\n", day);
    return 0;
}

