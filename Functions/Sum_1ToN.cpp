#include<iostream>
using namespace std;

int Sum_1ToN(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<"Sum from 1 to "<<n<<" = " <<Sum_1ToN(n);
}