#include<iostream>
using namespace std;

int TrailingZeroes(int n){
    int count = 0;
    while(n>=5){
        count+=n/5;
        n/=5;
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    cout<<"Number of Zeroes = "<<TrailingZeroes(n);
}