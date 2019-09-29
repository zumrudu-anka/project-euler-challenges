#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int t;
    cout<<endl<<setw(68)<<"Girilen Sayidan Kucuk Cift Fibonacci Sayilarinin Toplami"<<endl;
    begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
    cin >> t;
    for(int i = 0; i < t; i++){
        long n, fibo1 = 1, fibo2 = 2, temp, top = 0;
        cout<<endl<<i + 1<<". Sayiyi Giriniz: ";
        cin >> n;
        while(fibo2 < n){
            if(fibo2 % 2 == 0){
                top += fibo2;}
            temp = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = temp;
        }
        cout <<endl<<i + 1<<". Sonuc: "<< top << endl;
    }
    cout<<endl<<"Programi Kapatmak Icin 0, Yeniden Baslatmak Icin Herhangi Bir Tusa Basiniz: ";
    cin >> t;
    switch(t){
    	case 0:
    		exit(0);
    	default:
    		goto begin;
	}
    return 0;
}
