// C program to write to a Binary file using fwrite()
#include <stdio.h>
#include <stdlib.h>

struct threeNum //membuat struktur
{
	int n1, n2, n3;
};

int main()
{
	int n;
	// deklarasi struktur
	struct threeNum num;
    //membuat pointer file
	FILE* fptr;
	if ((fptr = fopen("program.bin", "wb")) == NULL) //membuka dan membuat file
    {
		printf("Error! opening file");
		// melakukan cek file, 
        //jika file biner tidak terbaca program berhenti.
		exit(1);
	}
	int flag = 0;
	// mengembalikan nilai pointer pada file (menulis data).
	for (n = 1; n < 5; ++n) 
    {
		num.n1 = n;
		num.n2 = 5 * n;
		num.n3 = 5 * n + 1;
        //menulis data pada file binary
		flag = fwrite(&num, sizeof(struct threeNum), 1,fptr);
	}
	// melakukan cek jika data sudah di tulis pada file binary
	if (!flag) 
    {
		printf("Write Operation Failure");
	}
	else
    {
		printf("Write Operation Successful");
	}
	fclose(fptr); //menutup file

    printf("\n\n");

    if ((fptr = fopen("program.bin", "rb")) == NULL) //membuka dan membaca file
    {
        printf("Error! opening file");
        // melakukan cek file, 
        //jika file biner tidak terbaca program berhenti.
        exit(1);
    }
    // mengembalikan nilai pointer pada file (menampikan data).
    for (n = 1; n < 5; ++n) 
    {
        //membaca data file perbaris
        fread(&num, sizeof(struct threeNum), 1, fptr);
        //menampilkan data file yang sudah dibaca perbaris
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr); //menutup file

	return 0;
}


