#include<iostream>
using namespace std;

int Fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;

    cout<<"Factorial of "<<n<<" = "<<Fact(n);
}