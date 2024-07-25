#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if(age>=18){
        cout<<"Eligible for vote";
    }
    else{
        cout<<"Underage : not Eligible for vote";
    }
    return 0;
}