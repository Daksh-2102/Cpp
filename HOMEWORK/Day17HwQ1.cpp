#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    while(n>9){
        int sum = 0;
        while(n>0){
            int lastdigit = n%10;
            n/=10;
            sum+=lastdigit;
        }
        n=sum;
    }
    cout<<n;
}