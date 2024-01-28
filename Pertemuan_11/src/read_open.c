#include <stdio.h>

int main(){
	char nama[100];
	int umur;
	printf("Masukkan nama : "); 
    scanf("%[^\n]", &nama); //input %[^\n] untuk spasi
    fflush(stdin); //membersihkan buffer input standar (stdin)
	printf("Masukkan umur : "); 
    scanf("%d", &umur); 
    fflush(stdin); //membersihkan buffer input standar (stdin)

	FILE *out=fopen("text.txt","a"); 
    //membuka file text.txt dengan mode append pada variabel pointer *out
	fprintf(out,"%s#%d\n",nama, umur); 
    //menambahkan inputan nama dan umur yang baru pada file dengan memanggil variabel out
	fclose(out); //menutup file
	printf("Sukses menambah data.");
	getchar();
    
    FILE *in=fopen("text.txt","r");
    //membuka file text.txt dengan mode read pada variabel pointer *in
        if(!in)//melakukan cek apakah file tersedia atau tidak
        {  
           printf("tidak ada file");
        }
        else
        {
           while(!feof(in)) //mendeteksi baris pada isi file dengan perulangan
           {
              fscanf(in,"%[^#]#%d\n", &nama, &umur); 
              //menampung isi data file pada variabel nama dan umur
              fflush(stdin);//membersihkan buffer input standar (stdin)
              printf("%s %d\n", nama, umur);
              //menampilkan isi file yang berada pada variabel nama dan umur
           }
           fclose(in);
        }     
        getchar();
    return 0;
}

