#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
   
    long long reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        n/=10;
        reverse=reverse*10+lastdigit;
    }
    cout<<reverse;
}