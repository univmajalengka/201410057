#include<iostream>
using namespace std;
int main()
{
    int jam,menit,detik,total_detik;
    cout<< "Masukan Jam => ";
    cin>>jam;
    cout<< "Masukan Menit => ";
    cin>>menit;
    cout<< "Masukan Detik => ";
    cin>>detik;
    total_detik=(jam*3600)+(menit*60)+detik;
    cout<< "Total Detik :"<<total_detik;
    return 0;
}