#include<iostream>    //deklarasi library 
#include<stdio.h>   
#include<stdlib.h>  
#include<cmath>     
#include<cstdlib>   
#include<ctime>
#include<conio.h>
#include<iomanip>
#include<array>

using namespace std;

void pola_1 (); //fungsi yang akan dibuat
void pola_2 ();
void balok ();
int fpb ();
double luas_persegi_panjang();
//void coba (int a, int b);
void bilangan (int x, int y);
void input_array(int a[], int n);
long jumlah (int a[], int n);
int penjumlahan (int x);
void nama (string a, int b, float c, double d);

int main() //fungsi utama
{
	// pola_1();
	cout<<fpb();
	
}

void pola_1 () //fungsi yang dibuat
{
    cout << "Pola 1\n";
	
	int n;

	cout << "Masukan panjang pola: ";
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "*" ;
		}
		cout << endl;
	}
}

void pola_2 ()
{
	cout << "Pola 2\n";

	int n;

	cout << "Masukan panjang pola: ";
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = n; j >= i; j--){
			cout << "*" ;
		}
		cout << endl;
	}	
}

void balok() //fungsi tanpa paramter tanpa nilai balik
{
	int p,l,t;
	int hasil;
	cout << "input panjang : ";
	cin >> p;
	cout << "input lebar : ";
	cin >> l;
	cout << "input tinggi : ";
	cin >>  t;

	hasil = p*l*t;
	cout << endl;
	cout << "Volume = " << hasil << endl;
}

int fpb () //fungsi tanpa paramter dengan nilai balik
{
	int a=24, b=18, hasil;
	int r = a%b;
	if(r==0)
	{
		hasil=b;
	}
	else
	{
		while (r!=0)
		{
			a=b;
			b=r;
			r=a%b;
			hasil=b;
		}
		return (hasil); //nilai balik
	}
}

double luas_persegi_panjang() //fungsi tanpa paramter dengan nilai balik
{
	int p=10, l=6;
	double luas = p * l;
	return luas;
}

void coba (int a, int b) // fungsi dengan parameter (int a, int b)
{
	// a = 20;
	// b = 50;

	cout << a << " , " << b << endl;

	//tulis di fungsi utama
	// int a,b,x,y;
	// a = 2;
	// b = 5;
	// cout << "a = " << a << " , " << "b = " << b << endl;
	
	// cout << "input bilangan a : ";
	// cin >> x;
	// cout << "input bilangan b : ";
	// cin >> y;
	// coba(x,y);
	// // cout << "a = " << a << " , " << "b = " << b << endl;

	// // getch();
}

void bilangan (int x, int y) //fungsi dengan parameter tanpa nilai balik
{
	int z = x;
		x = y;
		y = z;
	cout << "Bilangan di dalam fungsi " << endl;
	cout << "Bil-1 : " << x << endl;
	cout << "Bil-2 : " << y << endl;

	//tulis di fungsi utama
	// int bil1, bil2;
	// cout << "Input bilangan ke-1 : ";
	// cin >> bil1;
	// cout << "Input bilangan ke-2 : ";
	// cin >> bil2;
	// cout << endl;

	// cout << "Keadaan awal " << endl;
	// cout << "Bilangan ke-1 : " << bil1 << endl;
	// cout << "Bilangan ke-2 : " << bil2 << endl;
	// cout << endl;

	// bilangan(bil1,bil2);
	
	// cout << endl;
	// cout << "Keadaan akhir " << endl;
	// cout << "Bilangan ke-1 : " << bil1 << endl;
	// cout << "Bilangan ke-2 : " << bil2 << endl;
	// cout << endl;
	// return 0;
}

int penjumlahan (int x) //fungsi dengan parameter nilai balik
{
	int hasil;
	hasil = x+1;
	return hasil;

	//tulis di program utama
	// int bil,hasil;

	// cout << "input bilangan bulat : ";
	// cin >> bil;

	// cout << endl;

	// hasil = penjumlahan(bil);

	// cout << "hasil penjumlahan 1 = " << hasil << endl;

	// return 0;
}

void nama (string a, int b, float c, double d)
{
	cout << "hasil a : " << a << endl;
	cout << "hasil b : " << b << endl;
	cout << "hasil c : " << c << endl;
	cout << "hasil d : " << d << endl;

	//tulis di program utama
	// 	string w;
	// int x;
	// float y;
	// double z;
	// cout << "Input string a : ";
	// cin >> w;
	// cout << "Input integer b : ";
	// cin >> x;
	// cout << "Input float c : ";
	// cin >> y;
	// cout << "Input double d : ";
	// cin >> z;

	// nama(w,x,y,z);
}

// //fungsi dengan parameter array
// void input_array(int a[], int n) //fungsi dengan parameter array tanpa nilai balik
// {
// 	for (int i=0; i<n; i++)
// 	{
// 		cout << "Input nilai A["<<i<<"] : ";
// 		cin >> a[i];
// 	}
// }

// long jumlah (int a[], int n) //fungsi dengan parameter array dengan nilai balik
// {
// 	long jml = 0;

// 	for (int i=0; i<n; i++)
// 	{
// 		jml += a[i];
// 	}

// 	return jml;
// }

// //tulis di program utama
// int x[100];
// int jmlelement;
// int hasil;

// cout << "Input banyak element array yang diinginkan : ";
// cin >> jmlelement;
// cout << endl;

// input_array(x, jmlelement); //memanggil fungsi
// cout << endl;

// hasil = jumlah(x, jmlelement); //memanggil fungsi
// cout << endl;

// cout << "Hasil Penjumlahan array = " << hasil;

// return 0;