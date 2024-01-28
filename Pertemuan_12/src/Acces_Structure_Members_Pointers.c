#include<stdio.h>
#include<stdlib.h>

struct student{
    char *name; //pointer
    int age;  
    char program[30]; //array
};

int main(){
    //membuat struktur variabel dan inisialisasi data anggota struktur
    struct student stu = {
        .name = "Arriva",
        .age = 23,
        .program = "Dasar Pemrograman",
    };
    
    struct student *ptr_stu = &stu; //deklarasi struktur pointer
    int i;

    printf("Mengakses anggota struktur dengan variabel: \n");
    printf("Name: %s\n", stu.name); //mengakses dengan variabel stu.nama_anggota
    printf("Age: %d\n", stu.age); //mengakses dengan variabel stu.nama_anggota
    printf("Program enrolled: %s\n", stu.program); //mengakses dengan variabel stu.nama_anggota

    printf("\n\nMengakses anggota struktur dengan pointer: \n");
    printf("Name: %s\n", ptr_stu->name); //mengakses dengan pointer ptr_stu->nama_anggota
    printf("Age: %d\n", ptr_stu->age); //mengakses dengan pointer ptr_stu->nama_anggota
    printf("Program enrolled: %s\n", ptr_stu->program); //mengakses dengan pointer ptr_stu->nama_anggota
    
    return 0;
}

