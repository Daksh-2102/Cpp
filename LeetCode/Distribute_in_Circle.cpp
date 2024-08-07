// Distribute in a circle
#include<iostream>
using namespace std;

int Distribute_Circle(int A,int B,int C){
    int ans = (C+A-1)%B;

    return ans;
}

int main(){
    int A;
    cout<<"Number of chocolates :- ";
    cin>>A;

    int B;
    cout<<"Number of Students :- ";
    cin>>B;

    int C;
    cout<<"Starting Position :- ";
    cin>>C;

    cout<<Distribute_Circle(A,B,C);
}