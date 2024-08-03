#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n==1) cout<<n<<" is Neither prime nor composite";

    if(n<=0){
        cout<<n<<" is not prime";
        return 0;
    }
    int i=2;
    while(i<=n){
        if(n%i==0){
            cout<<n<<" is not prime";
            return 0;
        }
        cout<<n<<" is Prime";
        break;
    }
}