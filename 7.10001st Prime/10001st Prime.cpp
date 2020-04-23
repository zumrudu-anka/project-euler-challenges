#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

vector<int> primes;

int getPrime(int n){
    if(n < primes.size()){
        return primes.at(n - 1);
    }

    int primeNum = primes.at(primes.size() - 1) + 2;
    bool isFinded = false;
    
    while(!isFinded && n > primes.size()){
        isFinded = true;
        for(int i = 0; i < primes.size(); i++){
            if(primeNum % primes.at(i) == 0){
                isFinded = false;
                primeNum += 2;
                break;
            }
        }
        if(isFinded){
            isFinded = false;
            primes.push_back(primeNum);
            primeNum += 2;
        }
    }
    
    return primes.at(n - 1);
}

int main() {
    primes.push_back(2);
    primes.push_back(3);
    int t;
    cout<<endl<<setw(50)<<"N. Siradaki Asal Sayi"<<endl;
    begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
    getTryCount:cin >> t;
    if(t < 1){
    	cout<<endl<<"Lutfen Pozitif Bir Deger Giriniz: "; goto getTryCount;
	}
    for(int i = 0; i < t; i++){
        int n;
        cout<<endl<<"Kacinci Siradaki Asal Sayiyi Bulmak Istiyorsunuz? : ";
        cin >> n;
        if(n < 3){
            cout << n << ". Siradaki Asal Sayi : " << primes.at(n - 1) << endl;
        }
        else{
            cout << n << ". Siradaki Asal Sayi : " << getPrime(n) << endl;
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
