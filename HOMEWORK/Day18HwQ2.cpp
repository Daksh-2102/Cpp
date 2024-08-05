#include<iostream>
using namespace std;

long long Reverse(long long n){
    long long reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        n/=10;
        reverse=reverse*10+lastdigit;
    }
    return reverse;
}

int main(){
    long long n;
    cin>>n;

    cout<<"Reverse = "<<Reverse(n);
}