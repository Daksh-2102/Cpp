#include<bits/stdc++.h>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void Reversed_Array(int n,int arr[]){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;


    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Array Before Reversing :";
    display(n,arr);

    cout<<"Reversed  Array : - ";
    Reversed_Array(n,arr);

    
}