#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;

    if(year%400==0 || (year%4==0 && year%100!=0)){
        cout<<year<<" is a Leap Year";
    }
    else{
        cout<<year<<" is not a Leap year";
    }
    
    return 0;
    
}