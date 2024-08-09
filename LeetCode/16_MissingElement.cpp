#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;


    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }

    int s2 = (n * (n+1) ) / 2;

    cout<<"Missing number = "<<s2-sum;

}