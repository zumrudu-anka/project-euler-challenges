#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int t;
    cout<<endl<<" Girilen Sayiya Kadar Olan Sayma Sayilarinin;\n Toplamlarinin Karesi ile Karelerinin Toplaminin Farki"<<endl;
    begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
    getTryCount:cin >> t;
    if(t < 1){
    	cout<<endl<<"Lutfen Pozitif Bir Deger Giriniz:"; goto getTryCount;
	}

    for(int i = 0; i < t; i++){
        int n;
        cout<<endl<<"Lutfen Sayiyi Giriniz:";
        cin >> n;
        long sumOfSquare = 0, squareOfSum = 0;
        for(int j = 1; j < n + 1; j++){
            sumOfSquare += pow(j, 2);
            squareOfSum += j;
        }
        squareOfSum = squareOfSum * squareOfSum;
        cout << "Sonuc: " << abs(squareOfSum - sumOfSquare)<<endl;
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
