#include<iostream>
using namespace std;

int ValidRectangle(int a ,int b ,int c ,int d){
    if((a==b && c==d) || (a==c && b==d)|| (a==d && b==c)){
        return 1;
    }
    else{
        return 0;
    }
}

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
    int d;
    cout<<"d : ";
    cin>>d;


   if(ValidRectangle(a,b,c,d)) {
       cout<<"It is a Valid rectangle";
   }
   else{
       cout<<"It is  not a Valid rectangle";
   }


}