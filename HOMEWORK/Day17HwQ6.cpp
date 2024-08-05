#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int num = n;

    if(n<0) return 0;
     
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        n/=10;
        reverse=reverse*10+lastdigit;
    }

    if(num==reverse) cout<<num<<" is Palindrome";
    else cout<<num<<" is not Palindrome";
}