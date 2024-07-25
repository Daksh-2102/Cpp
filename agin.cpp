#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age>=1 && age<=5){
        cout<<"Baby";
    }
    else if(age>=6 && age<=10){
        cout<<"Child";
    }
    else if(age>=11 && age<=17){
        cout<<"Minor";
    }
    else if(age>=18 && age<=24){
        cout<<"Adult/Teenager";
    }else if(age>=25 && age<=50){
        cout<<"Mature Man";
    }
    else if(age>=51 && age<=100){
        cout<<"Old Man";
    }
    else{
        cout<<"Invalid age";
    }
}