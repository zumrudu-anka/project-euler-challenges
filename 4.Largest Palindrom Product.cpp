#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

bool CheckPalindrom(int number){
    int first = 0, last = to_string(number).length() - 1;
    while(to_string(number)[first] == to_string(number)[last]){
        first++;
        last--;
    }
    if(first >= last){
        return true;
    }
    return false;
}

vector<int> generatePalindrom(){
    vector<int> palindromnumbers;
    for(int i = 100; i < 1000; i++){
        for(int j = i; j < 1000; j++){
            if(CheckPalindrom(i * j)){
                palindromnumbers.push_back(i * j);
            }
        }
    }
    return palindromnumbers;
}

int FindPalindrom(vector<int> palindromNumbers, int number){
    for(int i = number - 1;; i--){
        if(find(palindromNumbers.begin(), palindromNumbers.end(), i) != palindromNumbers.end())
        return i;
    }
}

int main(){
    int t;
    vector<int> palindromNumbers;
    bool programBegin = false;
    cout<<endl<<setw(50)<<"Girilen Sayidan Kucuk"<<endl;
	cout<<setw(77)<<"3 Basamakli iki Sayinin Carpimi ile Elde Edilebilen En Buyuk Palindrom Sayi"<<endl;
	begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
    getTryCount:cin >> t;
    if(t < 1){
    	cout<<endl<<"Lutfen Pozitif Bir Deger Giriniz:"; goto getTryCount;
	}
	if(!programBegin){
		cout<<endl<<"Loading..."<<endl;
		palindromNumbers = generatePalindrom();
	}
	programBegin = true;
    for(int i = 0; i < t; i++){
        int n;
        getnumber:cout<<endl<<"Lutfen Sayiyi Giriniz(10000 - 998001):";
        cin >> n;
        if(n < 10000 || n > 998001){
        	cout<<endl<<"Lutfen Belirtilen Aralikta Bir Sayi Giriniz:"; goto getnumber;
		}
        cout<<endl<<"Palindrom Sayi:"<<FindPalindrom(palindromNumbers, n)<<endl;
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
