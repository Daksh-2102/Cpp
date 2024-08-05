#include<iostream>
using namespace std;

int Fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

void Prime(int n){
    int count =0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }

    if(n<=0) cout<<n<<" is not prime";
    else if(n==1) cout<<n<<" is neither prime nor composite";
    else if(count==1) cout<<n<<" is prime ";
    else cout<<n<<" is composite";

}

int main(){
    int a,b;
    cin>>a>>b;


    // fact(a);
    cout<<"Factorial of "<<a<<" = "<<Fact(a)<<endl;
    //prime(a);
    Prime(a);cout<<endl;
    //fact(b);
    cout<<"Factorial of "<<b<<" = "<<Fact(b)<<endl;
    //prime(b);
    Prime(b);cout<<endl;
    //fact(b-a);
    cout<<"Factorial of "<<b-a<<" = "<<Fact(b-a)<<endl;
    //prime(b-a);
    Prime(b-a);


}