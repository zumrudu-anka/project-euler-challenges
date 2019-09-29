#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

bool isPrime(int number){
    for(int i = 2; i < sqrt(number) + 1; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

vector<int> GetPrimeNumbers(int N){
    vector<int> primeNumbers;
    primeNumbers.push_back(2);
    for(int i = 3;i < N + 1; i++){
        if(isPrime(i)){
            primeNumbers.push_back(i);
        }
    }
    return primeNumbers;
}

int FindSmallestCommonFloor(int N){
    vector<int> numbers, results;
    for(int i = 2; i < N + 1; i++){
        numbers.push_back(i);
    }
    vector<int> primeNumbers = GetPrimeNumbers(N);
    int count = 0;
    for(int j = 0; j < primeNumbers.size(); j++){
        bool isdivided = false;
        for(int i = 0; i < numbers.size(); i++){
            if(numbers[i] % primeNumbers[j] == 0){
                isdivided = true;
                numbers[i] /= primeNumbers[j];
            }
        }
        if(isdivided){
            results.push_back(primeNumbers[j--]);
        }
    }
    int smallestCommonFloor = 1;
    for(int i = 0; i < results.size(); i++){
        smallestCommonFloor *= results[i];
    }
    return smallestCommonFloor;
}

int main(){
    int t;
    cout<<endl<<setw(68)<<"Girilen Sayiya Kadar Olan Sayilarin En Kucuk Ortak Kati"<<endl;
    begin:cout<<endl<<"Kac Deneme Yapmak Istediginizi Belirtin: ";
    getTryCount:cin >> t;
    if(t < 1){
    	cout<<endl<<"Lutfen Pozitif Bir Deger Giriniz:"; goto getTryCount;
	}
    for(int i = 0; i < t; i++){
        int n;
        cout<<endl<<"Lutfen Sayiyi Giriniz:";
        cin >> n;
        if(n < 3){
            cout<<endl<<"EKOK:"<<n<<endl;
        }
        else{
            cout<<endl<<"EKOK:"<<FindSmallestCommonFloor(n)<<endl;
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
