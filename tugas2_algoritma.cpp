#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double angka;
    double alas,tinggi,luas;
    cout << "Bilangan bulat dari :"; 
    cin >> angka;
    cout << "adalah :";
    cout << round(angka);
    cout << "\n";
    cout << "Jadi luas segitiga dengan alas :"; 
    cin >> alas;
    cout << "dan tinggi :"; 
    cin >> tinggi;
    luas=alas*tinggi;
    cout << "adalah " <<luas;
    return 0;
}