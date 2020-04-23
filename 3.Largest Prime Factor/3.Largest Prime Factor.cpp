#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int t;
    cout<<endl<<setw(58)<<"Girilen Sayinin En Buyuk Asal Boleni"<<endl;
    begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
    cin>>t;
    for(int i = 0; i < t; i++){
        long long n;
        cout<<endl<<i + 1<<". Sayiyi Giriniz: ";
        cin >> n;
        while(n % 2==0){
            n /= 2;
        }
        if(n == 1){
            cout <<endl<<i + 1<<". Sonuc: "<< 2 << endl;
            continue;
        }
        for(int j = 3 ; j < sqrt(n) + 2 ; j += 2){
            if(n % j == 0){
                while (n % j == 0){
                    n /= j;
                }
                if(n == 1){
                	cout <<endl<<i + 1<<". Sonuc: "<< j << endl;
                    break;
                }
            }
        }
        if(n > 2){
            cout <<endl<<i + 1<<". Sonuc: "<< n << endl;
        }
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
