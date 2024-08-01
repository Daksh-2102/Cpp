#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the table : ";
    cin>>n;

    int m;
    cout<<"Enter m :";
    cin>>m;

    int i=1;
    while(i<=m){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }
}