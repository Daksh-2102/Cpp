#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    if(n<1){
        return 0;
    }

    while(n!=1){
        if(n%2==1){
            cout<<" is not a Power of 2";
            return 0;
        }

        n/=2;

    }
    cout<<" is Power of 2";
    return 0;
}