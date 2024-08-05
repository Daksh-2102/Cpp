#include<iostream>
using namespace std;

void prime(int n){

    int count = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    if(n<=0) cout<<n<<" is not prime";
    else if(n==1) cout<<n<<" is neither prime nor composite";
    else if(count==1) cout<<n<<" is prime";
    else cout<<n<<" is Composite";
}

int main(){
    int n;
    cin>>n;

    prime(n);
    
}