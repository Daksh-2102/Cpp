#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"a : ";
    cin>>a;

    int b;
    cout<<"b : ";
    cin>>b;

    int c;
    cout<<"c : ";
    cin>>c;

    if(a>b || a>c){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}