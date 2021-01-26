#include <iostream>
using namespace std;

void line(){
    cout<<"-------------------------------"<<endl;
}
int main()
{
    cout<<"Menghitung Take Home Pay (Gaji Bersih)\n";
    line();
    const float persenTunjangan = 0.2;
    const float persenPajak = 0.15;
    string namakaryawan;
    int gajiPokok, gajiBersih, pajak, tunjangan;
    cout<<"Nama Karyawan \t: ";
    getline(cin,namakaryawan);
    cout<<"Gaji Pokok \t: Rp. ";
    cin>>gajiPokok;
    tunjangan = persenTunjangan * gajiPokok;
    pajak = persenPajak * gajiPokok;
    gajiBersih = gajiPokok + tunjangan - pajak;
    line();
    cout<<"Tn./Ny. "<<namakaryawan<<" mendapatkan Gaji Bersih senilai Rp. "<<gajiBersih<<endl;
    return 0;
}