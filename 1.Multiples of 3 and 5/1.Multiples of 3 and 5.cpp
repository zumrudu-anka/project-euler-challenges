#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cout<<endl<<setw(68)<<"Girilen Sayidan Kucuk 3 ve 5 in Pozitif Katlarinin Toplami"<<endl;
    begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
	cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cout<<endl<<i + 1<<". Pozitif Sayiyi Giriniz: ";
        cin >> n;
        
        // Girilen sayıdan kücük 3'e 5'e ve 15'e bölünebilen sayi miktari
        int a = (n - 1) / 3;
        int b = (n - 1) / 5;
        int c = (n - 1) / 15;
        
        long d = 3 * a * (a + 1)/2 + 5 * b * (b + 1)/2 - 15 * c * (c + 1)/2;
        
        cout <<endl<<i + 1<<". Sonuc: "<< d << endl;
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
