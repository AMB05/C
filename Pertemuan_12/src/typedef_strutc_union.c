#include <stdio.h>
#include <string.h>

typedef struct{ //typedef struktur
    char make[20];
    int model_year;
    int id_type; 

    union{ //menjadikan union sebagai anggota struktur
        int id_num;
        char VIN[20]; 
    } id;
} vehicle;

int main() 
{  
    vehicle car1; //deklarasi typedef struktur
    strcpy(car1.make, "Ford"); //pemberian nilai anggota struktur
    car1.model_year = 2017; //pemberian nilai anggota struktur
    car1.id_type = 0; //pemberian nilai anggota struktur
    car1.id.id_num = 123098; //pemberian nilai anggota union pada struktur
        
    printf("Car %s\nYears %d\n", car1.make, car1.model_year);
    strcpy(car1.id.VIN, "Mustang");//pemberian nilai anggota union pada struktur
    printf("Model %s", car1.id.VIN);

    return 0;
}


