#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main () //fungsi utama
{
    
    string lampu;
    cout << "input warna lampu lalu lintas" <<endl;
    cin >> lampu;
    cout << endl;

    if (lampu == "merah" || lampu == "MERAH")
    {
       cout << "berhenti" ;
    }
    else if (lampu == "kuning")
    {
        cout << "hati-hati";
    }
    else if (lampu == "hijau")
    {
        cout << "jalan";
    }
    else
    {
        cout << "inputan salah";
    }

    // int x;
    // cout << "input bilangan " << endl;
    // cin >> x;

    // if(x>0)
    // {
    //     cout << "ini adalah bilangan postif";
    // }
    // else if (x<0)
    // {
    //     cout << " ini adalah bilangan negatif";
    // }
    // else if (x==0)
    // {
    //     cout << "ini adalah NOL";
    // } 
    
    // //Percabangan switch-case  
    int x;
    cout << "Masukkan bilangan : " << endl;
    cin >> x;
    switch (x)
	{
        case 1 :
        cout << "ini adalah satu";
				break;
        case 2 : 	
        cout << "ini adalah dua";
                break;
        case 3 :
     	cout << "ini adalah tiga";
                break;
        case 4 : 	
        cout << "ini adalah empat";
                break;
        default : 
        cout << "angka yang dimasukkan salah";
                break;
   	}


    //Percabangan Nested
    // int x;
    // char makul;
    // cout << "Daftar Makul" <<endl;
    // cout << "A. Alpro " << endl;
    // cout << "B. Robotika " << endl;
    // cout << "Input Makul : " << endl;
    // cin >> makul;
    
    // switch (makul)
    // {
    //     case 'A':
    //     cout << "Masukkan Nilai : " << endl;
    //     cin >> x;
    //     switch (x/10)
    //     {
    //         case 1 :
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 2 : 	
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 3 :
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 4 : 	
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 5 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 6 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 7 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 8 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 9 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         case 10 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         default : cout << "salah input";
    //     }
    //     break;

    //     case 'B':
    //     cout << "Masukkan Nilai : " << endl;
    //     cin >> x;
    //     switch (x/10)
    //     {
    //         case 1 :
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 2 : 	
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 3 :
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 4 : 	
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 5 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 6 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 7 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 8 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 9 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         case 10 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         default : cout << "salah input";
    //     }
    //     break;
        
    //     default: cout << "salah input";
    //     break;
    // }


    //percabangan nested
    // string member, jenis_member;
    // cout<<"Apakah Anda Punya member ?" <<endl;
    // cin >> member;
    // if (member == "ya" || "Ya" || "YA")
    // {
    //     cout << "Apakah Jenis Member Anda ?" << endl;
    //     cin >> jenis_member;

    //     if (jenis_member == "gold" || "Gold" || "GOLD")
    //     {
    //         cout << "Anda dapat potongan 15%";
    //     }
    //     else if (jenis_member == "Silver" || "silver" || "SILVER")
    //     {
    //         cout << "Anda dapat potongan 10%";
    //     }
    //     else if (jenis_member == "bronze" || "Bronze" || "BRONZE")
    //     {
    //         cout << "Anda dapat potongan 5%";
    //     }
    //     else
    //     {
    //         cout << "Salah Input";
    //     }
    // }
    // else if (member == "tidak" || "Tidak" || "NO")
    // {
    //     cout << "anda tidak dapat potongan";
    // }
    // else
    // {
    //     cout << "anda salah input";
    // }


    //Percabangan Nested
    // int hari;
    // string bln ;
    // string sign;
    // string nama;
    // int a = 0;

    // cout<< "input tanggal lahir " <<endl;
    // cin>>hari;
    // cout<<endl;

    // cout<<"input bulan lahir anda : " <<endl;
    // cin>>bln;
    // cout<<endl;

    // cout<<"input nama :" <<endl;
    // cin>>nama;
    // cout<<endl;

    // if (bln=="januari") 
    // {
    //     if (hari < 20)
    //     {
    //         sign = "Capricorn";
    //     }
    //     else
    //     {
    //         sign = "Aquarius";
    //     }
    // }
    // else if (bln=="Februari") 
    // {
    //     if (hari < 19)
    //     {
    //         sign = "Aquarius";
    //     }
    //     else
    //     {
    //         sign = "Pisces";
    //     }
    // }
    // else if(bln=="Maret")
    // {
    //     if (hari < 21)
    //     {
    //         sign = "Pisces";
    //     }
    //     else
    //     {
    //         sign = "Aries";
    //     }
    // }
    // else if (bln=="April")
    // {
    //     if (hari < 20)
    //     {
    //         sign = "Aries";
    //     }
    //     else
    //     {   
    //         sign = "Taurus";
    //     }
    // }
    // else if (bln=="Mei")
    // {
    //     if (hari < 21)
    //     {
    //         sign = "Taurus";
    //     }
    //     else
    //     {
    //         sign = "Gemini";
    //     }
    // }
    // else if(bln=="Juni")
    // {
    //     if (hari < 21)
    //     {
    //         sign = "Gemini";
    //     }
    //     else
    //     {
    //         sign = "Cancer";
    //     }
    // }
    // else if (bln=="Juli")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Cancer";
    //     }
    //     else
    //     {
    //         sign = "Leo";
    //     }
    // }
    // else if(bln=="Agustus")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Leo";
    //     }
    //     else
    //     {
    //         sign = "Virgo";
    //     }
    // }
    // else if (bln=="September")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Virgo";
    //     }
    //     else
    //     {
    //         sign = "Libra";
    //     }
    // }
    // else if (bln=="oktober")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Libra";
    //     }
    //     else
    //     {
    //         sign = "Scorpio";
    //     }
    // }
    // else if (bln=="November")
    // {
    //     if (hari < 22)
    //     {
    //         sign = "scorpio";
    //     }
    //     else
    //     {
    //         sign = "Sagittarius";
    //     }
    // }
    // else if (bln=="Desember")
    // {
    //     if (hari < 22)
    //     {
    //         sign = "Sagittarius";
    //     }
    //     else
    //     {
    //         sign ="Capricorn";
    //     }
    // }
    // cout<<"Zodiac kamu adalah : "; cout<< sign ;


    // //Percabangan if, if-else
    // string a = "arriva";

    // if (a == "arsen") 
    // {
    //     cout << " benar" << endl;
    // }
    // else if (a=="arriva")
    // {
    //     cout << "nah baru bener";
    // }
    // else
    // {
    //     cout << "salah ";
    // }

    // //Percabangan if-else-if
    // int x;
    // cout << "Masukkan bilangan : " << endl;
    // cin >> x;

    // if (x > 0)
    // {
    //     cout << "positif";
    // }
    // else
    // if (x < 0)
    // {
    //     cout << "negatif";
    // }
    // else
    // if (x == 0)
    // {
    //     cout << "nol";
    // }

    // //Percabangan switch-case  
    // int x;
    // cout << "Masukkan bilangan : " << endl;
    // cin >> x;
    // switch (x)
	// {
    //     case 1 :
    //     cout << "ini adalah satu";
	// 			break;
    //     case 2 : 	
    //     cout << "ini adalah dua";
    //             break;
    //     case 3 :
    //  	cout << "ini adalah tiga";
    //             break;
    //     case 4 : 	
    //     cout << "ini adalah empat";
    //             break;
    //     default : 
    //     cout << "angka yang dimasukkan salah";
    //             break;
   	// }

    //Percabangan Nested
    // int a,b;
    // cout <<"input a"<<endl;
    // cin >>a;
    // cout <<"input b"<<endl;
    // cin >>b;

    // if((a+b) >= (b-a))
    // {
    //     a+= 2;
    //     b+= a;
    //     if(a % 2 == 0)
    //     {
    //         a=b;
    //         cout<<"hasil = "; cout<< a;
    //     }
    //     else
    //     {
    //         b+=a+1;
    //         cout<<"hasil = "; cout<< b;
    //     }
    // }
    // cout<<endl;
    // a = -b - a;
    // cout<<"hasil akhir = "; cout<< a;

    //Percabangan Nested
    // int x;
    // char makul;
    // cout << "Daftar Makul" <<endl;
    // cout << "A. Alpro " << endl;
    // cout << "B. Robotika " << endl;
    // cout << "Input Makul : " << endl;
    // cin >> makul;
    
    // switch (makul)
    // {
    //     case 'A':
    //     cout << "Masukkan Nilai : " << endl;
    //     cin >> x;
    //     switch (x/10)
    //     {
    //         case 1 :
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 2 : 	
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 3 :
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 4 : 	
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 5 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 6 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 7 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 8 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 9 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         case 10 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         default : cout << "salah input";
    //     }
    //     break;

    //     case 'B':
    //     cout << "Masukkan Nilai : " << endl;
    //     cin >> x;
    //     switch (x/10)
    //     {
    //         case 1 :
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 2 : 	
    //         cout << "Nilai Anda E";
    //                 break;
    //         case 3 :
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 4 : 	
    //         cout << "Nilai Anda D";
    //                 break;
    //         case 5 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 6 : 	
    //         cout << "Nilai Anda C";
    //                 break;
    //         case 7 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 8 : 	
    //         cout << "Nilai Anda B";
    //                 break;
    //         case 9 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         case 10 : 	
    //         cout << "Nilai Anda A";
    //                 break;
    //         default : cout << "salah input";
    //     }
    //     break;
        
    //     default: cout << "salah input";
    //     break;
    // }

    //Percabangan Nested
    // int hari;
    // string bln ;
    // string sign;
    // string nama;
    // int a = 0;

    // cout<< "input tanggal lahir " <<endl;
    // cin>>hari;
    // cout<<endl;

    // cout<<"input bulan lahir anda : " <<endl;
    // cin>>bln;
    // cout<<endl;

    // cout<<"input nama :" <<endl;
    // cin>>nama;
    // cout<<endl;

    // if (bln=="januari") 
    // {
    //     if (hari < 20)
    //     {
    //         sign = "Capricorn";
    //     }
    //     else
    //     {
    //         sign = "Aquarius";
    //     }
    // }
    // else if (bln=="Februari") 
    // {
    //     if (hari < 19)
    //     {
    //         sign = "Aquarius";
    //     }
    //     else
    //     {
    //         sign = "Pisces";
    //     }
    // }
    // else if(bln=="Maret")
    // {
    //     if (hari < 21)
    //     {
    //         sign = "Pisces";
    //     }
    //     else
    //     {
    //         sign = "Aries";
    //     }
    // }
    // else if (bln=="April")
    // {
    //     if (hari < 20)
    //     {
    //         sign = "Aries";
    //     }
    //     else
    //     {   
    //         sign = "Taurus";
    //     }
    // }
    // else if (bln=="Mei")
    // {
    //     if (hari < 21)
    //     {
    //         sign = "Taurus";
    //     }
    //     else
    //     {
    //         sign = "Gemini";
    //     }
    // }
    // else if(bln=="Juni")
    // {
    //     if (hari < 21)
    //     {
    //         sign = "Gemini";
    //     }
    //     else
    //     {
    //         sign = "Cancer";
    //     }
    // }
    // else if (bln=="Juli")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Cancer";
    //     }
    //     else
    //     {
    //         sign = "Leo";
    //     }
    // }
    // else if(bln=="Agustus")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Leo";
    //     }
    //     else
    //     {
    //         sign = "Virgo";
    //     }
    // }
    // else if (bln=="September")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Virgo";
    //     }
    //     else
    //     {
    //         sign = "Libra";
    //     }
    // }
    // else if (bln=="oktober")
    // {
    //     if (hari < 23)
    //     {
    //         sign = "Libra";
    //     }
    //     else
    //     {
    //         sign = "Scorpio";
    //     }
    // }
    // else if (bln=="November")
    // {
    //     if (hari < 22)
    //     {
    //         sign = "scorpio";
    //     }
    //     else
    //     {
    //         sign = "Sagittarius";
    //     }
    // }
    // else if (bln=="Desember")
    // {
    //     if (hari < 22)
    //     {
    //         sign = "Sagittarius";
    //     }
    //     else
    //     {
    //         sign ="Capricorn";
    //     }
    // }
    // cout<<"Zodiac kamu adalah : "; cout<< sign ;

    // string member, jenis_member;
    // cout << "apakah anda punya member?"<<endl;
    // cin>>member;

    // if(member == "ya")
    // {
    //     cout<<"apakah Jenis member anda?" << endl;
    //     cin>>jenis_member;
    //     if(jenis_member == "gold")
    //     {
    //         cout<<"diskon 10%";
    //     }
    //     else if (jenis_member == "platinum")
    //     {
    //         cout<<"diskon 5%";
    //     }
    //     else
    //     {
    //         cout<<"salah input";
    //     }
    // }
    // else if (member == "tidak")
    // {
    //     cout << "Anda tidak dapat diskon";
    // }
    // else
    // {
    //     cout << "Anda salah input";
    // }


    return 0;

}