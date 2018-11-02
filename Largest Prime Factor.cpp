#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n,temp;
        cin >> n;
        temp=n;
            if(temp%2==0){
            while(temp%2==0){
                temp=temp/2;
            }
            if(temp==1)cout<<2;
            else{
                for(long long int i=3;i<n/2+1;i+=2){
                        while(temp%i==0){
                        temp/=i;
                        }
                        if(temp==1){
                        cout<<i<<endl;
                        break;
                        }

                }
            }
        }
        else{
            for(long long int i=3;i<n/2+1;i+=2){
                while(temp%i==0){
                    temp/=i;
                }
                if(temp==1){
                    cout<<i<<endl;
                    break;
                    }
                }
            if(temp!=1)cout<<n<<endl;
        }
        
        
    }
    return 0;
}
