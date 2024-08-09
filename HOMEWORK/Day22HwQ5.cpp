#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    int SecondLargest = arr[0];
      for(int i=0;i<n;i++){
        if(arr[i]!=largest && arr[i]>SecondLargest){
            SecondLargest=arr[i];
        }
    }
    cout<<"Second Largest element of array = "<<SecondLargest;
}