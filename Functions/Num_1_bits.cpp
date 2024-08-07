#include<iostream>
using namespace std;

int Number_of_1_bits(int n){
    int count  = 0;
    while(n>0){
        int lastdigit = n%2;
        count+=lastdigit;
        n/=2;
    }
    return count;

}


int main(){
    int n;
    cin>>n;

    cout<<Number_of_1_bits(n);
    
}