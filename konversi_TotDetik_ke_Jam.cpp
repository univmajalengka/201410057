#include<iostream>
using namespace std;
int main()
{
    int total_detik,detik,menit,jam,sisa_menit;
    cout<< "Masukan Total Detik => ";
    cin>>total_detik;
    jam=total_detik/3600;
    sisa_menit=total_detik%3600;
    menit=sisa_menit/60;
    detik=sisa_menit%60;
    cout<<total_detik<<" detik = "<<jam<<":"<<menit<<":"<<detik<<" jam";
    return 0;
}