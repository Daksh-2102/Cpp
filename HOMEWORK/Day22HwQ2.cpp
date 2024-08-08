#include<iostream>
using namespace std;

int main(){

    int arr[100];
    for(int i=1;i<=18;i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=1;i<=18;i++){
        sum+=arr[i];
    }

   int avg = sum/18;
   cout<<"Average of elements = "<<avg;

}