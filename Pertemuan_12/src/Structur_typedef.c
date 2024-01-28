#include <stdio.h>
#include <string.h>

// membuat typedef struktur
typedef struct {
    int id;
    char name[50];
    float ipk;
} Student; 

int main() {
    // deklarasi struktur pada variabel std
    Student std;
    // memberikan nilai pada anggota struktur
    std.id = 1;
    strcpy(std.name, "Arriva");
    std.ipk = 3.78;

    // mengakses data struktur
    printf("Student ID: %d\n", std.id);
    printf("Student Name: %s\n", std.name);
    printf("Student IPK: %.2f\n", std.ipk);

    return 0;
}


