#include <stdio.h>
#include <string.h>

union Enemy { //union
    char name[20];  //char array member
    unsigned int class; //int member
};

int main(){
    //deklarasi union dengan variabel enemy
    union Enemy enemy;

    // memberikan nilai pada anggota value
    strcpy(enemy.name, "arriva");
    printf("Name: %s\n", enemy.name); //mengakses nilai anggota union

    enemy.class = 1; //peminjaman alamat
    printf("Class: %u\n", enemy.class); //mengakses nilai anggota union

    return 0;
}

