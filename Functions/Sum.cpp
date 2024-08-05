#include<iostream>
using namespace std;

void fun(){
    cout<<"My ist Function";
}
void Sum(int x,int y){ // fsn declartion
    int sum = x+y; // fxn define
    cout<<"Sum = "<<sum<<endl;
}
int Product(int x,int y){
    int mult  = x*y;
    return mult;
}

int main(){
    int a,b;
    cin>>a>>b;
    fun();cout<<endl;
    Sum(a,b);// fxn calling
    cout<<"Product = "<<Product(a,b);
    
}