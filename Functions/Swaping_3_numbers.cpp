#include<iostream>
using namespace std;

void Swap(int &a,int &b,int &c){
   a=b;
   b=c;
   c=a;
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

    cout<<"Before Swapping : a = "<<a<<" b ="<<b<<" c = "<<c<<endl;

    Swap(a,b,c);
    cout<<"After Swapping : a = "<<a<<" b ="<<b<<" c = "<<c<<endl;;
}