#include<iostream>
using namespace std;

void Cube(int n){
    int cube = n*n*n;
    cout<<"Cube of "<<n<<" = "<<cube;
}


int main(){
    int a;
    cin>>a;

   Cube(a);
}