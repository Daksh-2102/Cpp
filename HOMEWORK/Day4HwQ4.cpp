#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if(age<=12 || age>=65) {
        cout<<"YES, they are eligible";
    }
    else{
        cout<<"NO";
    }
}