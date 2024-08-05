#include<iostream>
using namespace std;

void Swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;

}


int main(){
    int a;
    cout<<"a : ";
    cin>>a;
    int b;
    cout<<"b : ";
    cin>>b;

    cout<<"Before Swapping : a = "<<a<<" b ="<<b<<endl;

    Swap(a,b);
    cout<<"After Swapping : a = "<<a<<" b ="<<b;
}