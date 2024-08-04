#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n==0) return 1;

    int ans = 0 , i = 1 , rem;

    while(n>0){
        rem = n % 2;
        rem = rem ^ 1;
        n/=2;

        ans+=rem*i;
        i*=2;
    }
    cout<<ans;
}