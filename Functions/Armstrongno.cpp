#include<bits/stdc++.h>
using namespace std;

int Count(int n){
    int count = 0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

bool ArmstrongNum(int n ,int digit){
    int ans = 0 ;
    int num = n;

    while(num){
        int lastdigit = num % 10;
        num/=10;
        ans=ans+pow(lastdigit,digit);
    }
    if(ans==n) return 1;
    else return 0;
}

int main(){
    int n;
    cin>>n;

    int digit = Count(n);
    if(ArmstrongNum(n,digit)){
        cout<<n<<" is Palindrome";
    }
    else{
        cout<<n<<" is not  Palindrome";
    }

    return 0;
}