#include <stdio.h>
//membuat struktur
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  //deklarasi struktur variabel s1
  //structtur nama_struktur variabel_struktur
  struct myStructure s1;

  //mengakses struktur dengan variabel s1
  //variabel_struktur.anggota_struktur = nilai
  s1.myNum = 1;
  s1.myLetter = 'B';

  // menampilkan nilai anggota struktur
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}