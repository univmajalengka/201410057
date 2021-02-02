#include<iostream>
using namespace std;

void line2(){
    cout<<"-------------------------------"<<endl;
}
void line1(){
    cout<<"-------------------------------";
}
void thanks(){
    cout << "\nTerima kasih";
}
void alert(){
    cout<<"Silahkan maskan total belanja dengan benar!";
}
int main ()
{
	system ("COLOR 0A");
	int totBelanja, totBayar, diskon;
	const float disc0 = 0;
	const float disc1 = 0.1;
	const float disc2 = 0.125;
	const float disc3 = 0.15;
	
	line1();
	cout << " PROGRAM DISKON SAUNG PRINTING SABLON DAN SPANDUK";
    line2();
	
	cout << "\nMasukan Total Belanja (min Rp. 1000) \t\t: Rp. ";
	cin >> totBelanja;
	cout <<endl;
	
	if (totBelanja <= 25000 && totBelanja >= 1000){
		diskon = totBelanja * disc0;
		totBayar = totBelanja - diskon;
		cout << "Diskon 0%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;
			
	} else if (totBelanja <= 50000 && totBelanja >= 25000){
		diskon = totBelanja * disc1;
		totBayar = totBelanja - diskon;
		cout << "Diskon 10%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;
		
	} else if (totBelanja <= 100000 && totBelanja >= 50000){
		diskon = totBelanja * disc2;
		totBayar = totBelanja - diskon;
		cout << "Diskon 12.5%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;
		
	} else if (totBelanja > 100000){
		diskon = totBelanja * disc3;
		totBayar = totBelanja - diskon;
		cout << "Diskon 15%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totBayar <<endl<<endl;
 	} else {
         alert();
     }
     thanks();
	return 0;
}