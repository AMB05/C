#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
        

    //for
    // for (int i=0; i<=10; i++)
    // {
    //    cout << "ulang ke-" << i << endl;
    // }

    // for(int i = 1; i <= 10; i++)
    // {
	// 	cout << i << endl; 
	// }

	// for(int i = 1; i <= 10; i += 2 )
    // {
	// 	cout << i << endl; 
	// }

	// for(int i = 1; i >= -10; i-- )
    // {
	// 	cout << i << endl; 
	// }

	// int total = 0;
	// for(int i = 1; i <= 10; i++, total += i)
    // {
	// 	cout << i << " || " << total << endl; 
	// }

    //while
    // int i =0;
    // while ( i <= 10 )
    // {
    //     cout<<"ulang ke-" << i << endl;

    //     i++;
    // }

    //while
    // int nomor = 1, angka;
    // cout << "Masukan angka berapa yang ingin dicetak ? " << endl;
    // cin >> angka;
    // cout << endl;
        
    // while(nomor <= angka )
    // {
    //     cout << nomor << ", " ;
    //     nomor++;
    // }

    //do-while
    // int i=0;
    // do {
    //     cout<<"ulang ke-" << i << endl;
    //     i++;
    // } while ( i <= 10);

    //do-while
    // int j=1, m, d;
    // do 
    // {
    //     m= j *60;
    //    	d=m*60;
	//     cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;
	    
    //     j +=1;	
    // } while (j <=10);


    //nested for
    // int x, y;
    // for (x = 0; x <= 5; x++){
    //     for( y = 0; y <= 3; y++){
    //         printf("Perulangan ke (%d, %d)\n", x, y);
    //     }
    // }

    //nested for
    // for(int t=1; t<=6; t++){
    //     //Menghitung Jumlah Tinggi Piramida
        
    //     for(int s=t; s<=6; s++){
    //         //Menghitung Jumlah Spasi per Baris
    //         cout <<" ";
    //     }
        
    //     for(int b=0; b<=(t*2)-2; b++){
    //         cout <<"*";
    //     }
    //     cout <<endl; 
    // }

    //nested while
    // int i,j;
    // cout <<"Input nilai i : ";
    // cin >> i;
    // while (i <= 10) 
    // {
    //     cout << endl;
    //     cout << "i : " <<i << endl;
    //     j=i+2;
    //     while (j <= 10)
    //     {
    //         cout << "     j : " << j;
    //         j=j+1;
    //     }

    //     i=i+1;
    // }

    //nested do-while
    int i = 10;
    int j;
    do 
    {
        j=1;;
        do
        {
            cout <<i*j<<" ";
            j++;
	    }
	    while (j<=i);
	    cout <<endl;
    i--;
    }
    while(i>=1);


    //kombinasi
    // bool jawab = true;
    // int i = 0;
    // string jawab_2;
    
    // while( jawab ) 
    // {
    //     cout << "ualng ngga? (ya/tidak)" << endl;
    //     cin >> jawab_2;

    //     // cek jawabnnya, kalau ya maka berhenti mengulang
    //     if( jawab_2 == "tidak" ||  jawab_2 == "TIDAK")
    //     {
    //         jawab = false;
    //     }

    //     i++;
    // }
    // cout << "ulang ke- " <<  i << endl;



    // int n = 5;
    // for(int i = 1; i <= n; i++)
    // {
	// 	for(int j = n; j >= i; j--)
    //     {
	// 		cout << "*" ;
	// 	}
	// 	cout << endl;
	// }


}