#include <iostream>
using namespace std;

/*Fungsi konversi Jam, Menit, Detik ke Total Detik*/
int waktu(int jam, int menit, int detik){
	int td;
	td=(jam*3600)+(menit*60)+detik;
	return td;
}

/*Fungsi konversi Total Detik ke Jam, Menit, Detik*/
void selisih(int totDetik){
	int jam, menit, detik, sisa_menit;
	jam=totDetik/3600;
	sisa_menit=totDetik%3600;
	menit=sisa_menit/60;
	detik=sisa_menit%60;
	cout<<"\nLama Waktu bermain Anda "<<jam<<" : "<<menit<<" : "<<detik<<" jam";
}


int main (){

	int jam1,jam2,menit1,menit2,detik1,detik2,totDetik;
	
	cout<<"----------------------- PROGRAM BILLING WARUNG INTERNET -----------------------\n\n";
	
	for(int i=1; i<=2; i++){
	    if(i==1){

	        cout<<"Masukan Waktu Awal\n-------------------\n";

	    }else{

	        cout<<"\nMasukan Waktu Akhir\n------------------\n"; 
    
	    }
	    cout<<"Masukan Jam\t: ";
	    cin>>jam1;
	    cout<<"Masukan Menit\t: ";
        cin>>menit1;
        cout<<"Masukan Detik\t: ";
        cin>>detik1;
        totDetik=waktu(jam1,menit1,detik1)-totDetik;
}
	 selisih(totDetik);
}