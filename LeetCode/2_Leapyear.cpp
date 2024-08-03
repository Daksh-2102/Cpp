#include<iostream>
using namespace std;
int main(){
    int leapyear;
    cin>>leapyear;

    if(leapyear%400==0 || (leapyear%4==0 && leapyear%100!=0)){
        cout<<leapyear<<" is Leapyear";
    }
    else{
        cout<<leapyear<<" is Not a Leapyear";
    }
    return 0;
}