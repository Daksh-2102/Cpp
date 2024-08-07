#include<bits/stdc++.h>
using namespace std;

int Bit_Difference(int a,int b){
    int n = a^b;
    int count = 0;
    while(n){
       int lastdigit = n%2;
       n/=2;
       if(lastdigit==1){
        count++;
       }
    }
    return count;
}

int main(){
    int a;
    cin>>a;

    int b;
    cin>>b;

    cout<<Bit_Difference(a,b);
}