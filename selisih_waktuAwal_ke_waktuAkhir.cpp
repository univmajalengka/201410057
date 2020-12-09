#include <iostream>
using namespace std;
int main()
{
    int jam1, menit1, detik1, totDetik1, 
        jam2, menit2, detik2, totDetik2, 
        jam3, menit3, detik3, totDetik3, 
        sisa_menit3;
        cout<<"----------------------- PROGRAM BILLING WARUNG INTERNET -----------------------\n\n";
    cout<<"Masukan Waktu Awal\n------------------\n";
    cout<<"Masukan Jam   : "; cin>>jam1; 
    cout<<"Masukan Menit : "; cin>>menit1; 
    cout<<"Masukan Detik : "; cin>>detik1;
    cout<<"\nMasukan Waktu Akhir\n------------------\n"; 
    cout<<"Masukan Jam   : "; cin>>jam2; 
    cout<<"Masukan Menit : "; cin>>menit2; 
    cout<<"Masukan Detik : "; cin>>detik2;
    totDetik1=(jam1*3600)+(menit1*60)+detik1;
    totDetik2=(jam2*3600)+(menit2*60)+detik2;
    totDetik3=totDetik2-totDetik1;
    jam3=totDetik3/3600;
    sisa_menit3=totDetik3%3600;
    menit3=sisa_menit3/60;
    detik3=sisa_menit3%60;
    cout<< "\nLama Waktu bermain Anda "<<jam3<<":"<<menit3<<":"<<detik3<<" jam";
    return 0;
}