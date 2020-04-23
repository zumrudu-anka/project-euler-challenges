#include <iostream>
#include <iomanip>

using namespace std;

int largestProduct(string num, int n, int k){
    int* digitArr = new int[n];
    for(int i = 0; i < num.length(); i++){
        digitArr[i] = num[i] - 48;
    }
    int maxi = 0;
    for(int i = 0; i < n - k; i++){
        int product = 1;
        for(int j = i; j < i + k; j++){
            product *= digitArr[j];
        }
        if(maxi < product){
            maxi = product;
        }
    }
    return maxi;
}

int main() {
    cout<<endl<<setw(50)<<"Serideki En Buyuk Carpim"<<endl;
    begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
    int t;
    getTryCount:cin >> t;
    if(t < 1){
    	cout<<endl<<"Lutfen Pozitif Bir Deger Giriniz: "; goto getTryCount;
	}

    for(int i = 0; i < t; i++){
        int n, k;
        cout << "Kac basamakli sayi gireceksiniz: ";
        cin >> n;
        cout << "Rakamlari carpimi bulunacak sayinin basamak sayisi: ";
        cin >> k;
        string num;
        cout << "Lutfen sayiyi giriniz: ";
        cin >> num;
        cout << "En buyuk carpim: " << largestProduct(num, n, k) << endl;
    }
    return 0;
}
