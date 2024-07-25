#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Base : ";
   cin>>n;

   int power;
   cout<<"Power : ";
   cin>>power;

   int num = n;

   for(int i=1;i<power;i++){
       num = num * n;
   }

   cout<<num;
}