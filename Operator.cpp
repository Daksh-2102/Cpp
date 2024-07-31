#include<iostream>
using namespace std;
int main(){
    cout<<13/2<<endl;
    cout<<13.5/2<<endl;
    cout<<23/2.7<<endl;
    cout<<6.8*2<<endl;

    int a = 10;
    int b = a++;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    int c = 10;
    int d = ++c;
    cout<<"c : "<<c<<endl;
    cout<<"d : "<<d<<endl;

    int e = 10;
    int f = e--;
    cout<<"e : "<<e<<endl;
    cout<<"f : "<<f<<endl;

    int g = 10;
    int h = --g;
    cout<<"g : "<<g<<endl;
    cout<<"h : "<<h<<endl;


}