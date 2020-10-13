#include <iostream>
#include <iomanip>

using namespace std;

long long getResult(int n){
    if(n < 12){
        return -1;
    }
    long long maxiResult = -1;
    for(int a = 1, b, c; a <= n / 3; a++){
        b = (n * n - 2 * n * a ) / (2 * n - 2 * a);
        c = n - (a + b);
        if((a * a + b * b) == c * c){
            if(a * b * c > maxiResult){
                maxiResult = a * b * c;
            }
        }
    }
    return maxiResult;
}

int main(){
    cout<<endl<<setw(50)<<"Special Pythagorean Triplet"<<endl;
    begin:cout<<endl<<"Please enter how many attempts you want to do: ";
    int t;
    getTryCount:cin >> t;
    if(t < 1){
    	cout<<endl<<"Please enter positive value: "; goto getTryCount;
	}
    for(int i = 0; i < t; i++){
        int n;
        cout << "Please enter a number for try to find Pythagorean Triplet multiplication: ";
        cin >> n;
        cout << "Result: " << getResult(n) << endl;
    }
    return 0;
}