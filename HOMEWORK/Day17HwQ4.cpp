#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    if(n<1) return 0;

    while(n!=1){
        int rem = n % 2 ;
        if(rem==1){
            cout<<" is Not Power of 2";
            return 0;
        }
        else{
            n/=2;
        }
    }
    cout<<" is Power of 2";
}