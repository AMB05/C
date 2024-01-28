#include <stdio.h>
#include <string.h>

int main()
{
    // deklarasi file pointer
    FILE* filePointer;
    // membuat data untuk dituliskan pada file dengan variabel array dataToBeWritten
    char dataToBeWritten[50] = "Dasar Pemrograman Praktikum Semester 1 ";
    // membuka file file-test.c dengan fungsi fopen()
    // menggunakan mode write dengan w untuk menulis file
    filePointer = fopen("file-test.c", "w");
    // melakukan cek file file-test.c untuk dilakukan pengoperasian
    if (filePointer == NULL) 
    {
        printf("file-test.c file tidak dapat dibuka.");
    }
    else 
    {
        printf("file sudah dibuka dan dapat dioperasikan.\n");
        // menuliskan data pada variabel array dataToBeWritten pada file file-test.c
        if (strlen(dataToBeWritten) > 0) 
        {
            // menuliskan data ke file dengan fungsi fputs()
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }
        // menutup file setelah selesai operasional
        fclose(filePointer);
    }
    return 0;
}


