#include<iostream>    //deklarasi library 
#include<stdio.h>   
#include<stdlib.h>  
#include<cmath>     
#include<cstdlib>   
#include<ctime>
#include<conio.h>
#include<iomanip>
#include<array>

using namespace std;  //standar deklarasi inputan

int main () //fungsi utama
{
    //array 1 dimensi menampilkan grafik nilai
    array<int,10> nilai;

	cout << "Program menampilkan grafik nilai" << endl;

	for(int i = 0; i <= nilai.size() ; i++)
    {
		cout << "jumlah mahasiswa dengan nilai ";
		if(i == 0)
        {
			cout << "0-9: ";
		}
        else if(i == 10)
        {
			cout << "100: ";
		}
		else
        {
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}
		cin >> nilai[i];
	}

	cout << endl;
	cout << "Grafik nilai" << endl;

	for(int i = 0; i <= nilai.size(); i++)
    {
		if(i == 0)
        {
			cout << "0-9  : ";
		}
        else if(i == 10)
        {
			cout << "100  : ";
		}
		else
        {
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}

		for(int bintang = 0; bintang < nilai[i]; bintang++)
        {
			cout << "*";
		}
		cout <<endl;

	}
	return 0;
    

}
    // //array 1 dimensi
    // int N[5]={25,12,17,10,15};
    // int i;
    // for(i=0; i<=4; i++)
    // {
    //     cout << N[i] << endl;
    // } 

    // int data[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Input Data Array Ke-"<<i<<" = ";
    //     cin >> data[i];
    // }

    // cout<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Data Baris Ke-"<<i<<" = "<<data[i]<<endl;
    // }

    // return 0;


    // // //cth kasus array 1 dimensi
    // float nilai1, nilai2, nilai3, nilai4, nilai5;
    // float jumlah, rata2;
    // cout<<"Program Menghitung Nilai Rata-rata"<<endl;
    // cout<<"Masukkan nilai ke 1 : ";
    // cin>>nilai1;
    // cout<<"Masukkan nilai ke 2 : ";
    // cin>>nilai2;
    // cout<<"Masukkan nilai ke 3 : ";
    // cin>>nilai3;
    // cout<<"Masukkan nilai ke 4 : ";
    // cin>>nilai4;
    // cout<<"Masukkan nilai ke 5 : ";
    // cin>>nilai5;
    // jumlah = nilai1 + nilai2 + nilai3 + nilai4 + nilai5;
    // rata2 = jumlah / 5;
    // cout<<"Nilai rata-rata adalah "<<rata2<<endl;
    // getch();

    // float nilai[5];
    // float jumlah, rata2;
    // cout<<"Program Menghitung Nilai Rata-rata"<<endl;
    // for(int i=0; i<5; i++)
    // {
    //     cout<<"Masukkan nilai ke "<<(i+1)<<" : ";
    //     cin>>nilai[i];
    // }
    // jumlah = 0;
    // for(int i=0; i<5; i++)
    // {
    //     jumlah = jumlah + nilai[i];
    // }
    // rata2 = jumlah / 5;
    // cout<<"Nilai rata-rata adalah "<<rata2<<endl;
    // getch();

    // //Array 1 dimensi
    //int jum_hari[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    // int tgl, bln, jumlah;

    // cout<<"Program Mencari Hari Di Tahun 2008"<<endl;
    // cout<<"Masukkan Tanggal : ";
    // cin>>tgl;
    // cout<<"Masukkan Bulan : ";
    // cin>>bln;
    // jumlah = 0;
    // for(int i=0; i<(bln-1); i++)
    // {
    //     jumlah = jumlah + jum_hari[i];
    // }
    // jumlah = jumlah + tgl;
    // cout<<"Jumlah Hari = "<<jumlah<<endl;
    // int sisa;
    // sisa = jumlah % 7;
    // cout<<"Tanggal "<<tgl<<" Bulan "<<bln<<" adalah Hari = ";
    // if (sisa==0)
    //     cout<<"Senin"<endl;
    // else if (sisa==1)
    //     cout<<"Selasa"<endl;
    // else if (sisa==2)
    //     cout<<"Rabu"<endl;
    // else if (sisa==3)
    //     cout<<"Kamis"<endl;
    // else if (sisa==4)
    //     cout<<"Jumat"<endl;
    // else if (sisa==5)
    //     cout<<"Sabtu"<endl;
    // else if (sisa==6)
    //     cout<<"Minggu"<endl;
    // getch();



    // //array 2 dimensi
    // cout<<"Program Matrik"<<endl;
    // int matrik[3][3];
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
    //         cin>>matrik[i][j];
    //     }
    // }
    // cout<<endl<<"Matrik Hasil : "<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //     cout<<setw(4)<<matrik[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // getch();

    // //array 2 dimensi
    //     cout<<"Program Pertambahan Matrik 3x3"<<endl;
    // int matrikA[3][3];
    // int matrikB[3][3];
    // int matrikC[3][3];
    // cout<<endl<<"Masukkan data Matrik A"<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
    //         cin>>matrikA[i][j];
    //     }
    // }
    // cout<<endl<<"Masukkan data Matrik B"<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
    //         cin>>matrikB[i][j];
    //     }
    // }
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //     matrikC[i][j] = matrikA[i][j] + matrikB[i][j];
    //     }
    // }

    // //clearerr();
    // cout<<"Matrik A :"<<endl<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //     cout<<setw(4)<<matrikA[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<"Matrik B :"<<endl<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //     cout<<setw(4)<<matrikB[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl<<"Hasil pertambahan, Matrik C :"<<endl<<endl;
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //     cout<<setw(4)<<matrikC[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // getch();

    // //sorting bubble sort
    // int data[10];
    // int i, j, tmp;
    // cout<<"Program Mengurutkan Data"<<endl;
    // cout<<"Dengan Metode Bubble Sort"<<endl;
    // for(i=0; i<10; i++)
    // {
    //     cout<<"Masukkan data ke "<<(i+1)<<" : ";
    //     cin>>data[i];
    // }
    // cout<<endl;
    // cout<<"Data sebelum diurutkan : "<<endl;
    // for(i=0; i<10; i++)
    // {
    //     cout<<data[i]<<" ";
    // }
    // cout<<endl;
    // for(i=0; i<9; i++)
    // {
    //     for(j=i+1; j<10; j++)
    //     {
    //         if(data[i]>data[j])
    //         {
    //             tmp = data[i];
    //             data[i] = data[j];
    //             data[j] = tmp;
    //         }
    //     }
    // }

    // cout<<"Data setelah diurutkan : "<<endl;
    // for(i=0; i<10; i++)
    // {
    //     cout<<data[i]<<" ";
    // }
    // getch();

    // //array multidimensi
    //     string letters[2][2][2] = 
    // {
    //     {
    //         { "A", "B" },
    //         { "C", "D" }
    //     },
    //     {
    //         { "E", "F" },
    //         { "G", "H" }
    //     }
    // };

    // for(int i = 0; i < 2; i++) 
    // {
    //     for(int j = 0; j < 2; j++) 
    //     {
    //         for(int k = 0; k < 2; k++) 
    //         {
    //             cout << letters[i][j][k] << "\n";
    //         }
    //     }
    // }

