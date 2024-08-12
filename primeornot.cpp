#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

   if(n==1) {
        cout<<n<<" is Neither prime nor composite";
    return 0;
   }
   if(n<=0){
        cout<<n<<" is Not prime";
        return 0;
   }
   else{
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is composite";
            return 0;
        }
    }
       cout<<n<<" is prime";

    }

}

