#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[100];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
    }

   int avg = sum/n;
   cout<<"Average of elements = "<<avg;

}