#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int rem, ans = 0, i=1;

    while(n>0){
        rem = n % 10;
        n/=10;
        ans+= rem * i;
        i*=2;
    }
    cout<<ans;
}