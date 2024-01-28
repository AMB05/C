// C program to Open a File,
// Write in it, And Close the File
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
		// menutup file dengan fungsi fclose()
		fclose(filePointer);

		printf("Data berhasil di tulis pada file file-test.c\n");
		printf("file sekarang di tutup.");
	}

    printf("\n\n");

    // membuka file file-test.c dengan fungsi fopen()
	// menggunakan mode read dengan r untuk membaca file
    filePointer = fopen("file-test.c", "r");
    // melakukan cek file file-test.c untuk dilakukan pengoperasian 
    if (filePointer == NULL) 
    {
        printf("file-test.c tidak dapat dibuka.");
    }
    else 
    {
        printf("file sudah dibuka dan dapat dioperasikan.\n");
        // membaca data variabel array dataToBeWritten pada file file-test.c
        // menggunakan fungsi fegets()
        while (fgets(dataToBeWritten, 50, filePointer) != NULL) 
        {
            //menampilkan data
            printf("isi file-test.c adalah %s", dataToBeWritten);
        }
        // menutup file dengan fungsi fclose()
        fclose(filePointer);
 
        printf("berhasil membaca data pada file file-test.c\n");
        printf("file sekarang di tutup.");
    }
	return 0;
}


