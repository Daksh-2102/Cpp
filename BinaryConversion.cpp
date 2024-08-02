#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int rem , i = 1 , ans = 0;

    while(n>0){
        rem = n % 2;
        n=n/2;
        ans = rem * i + ans;
        i=i*10;
        
    }
    cout<<ans;
}