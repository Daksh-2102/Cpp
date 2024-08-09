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

    int min = INT_MAX;
       for(int i=0;i<n;i++){
       if(arr[i]<min) {
           min=arr[i];
       }
    }

    int SecondMin = INT_MAX;
       for(int i=0;i<n;i++){
        if(arr[i]!=min && arr[i]<SecondMin){
            SecondMin=arr[i];
        }
    }
    
    int ThirdSmallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]!=min && arr[i]!=SecondMin && arr[i]<ThirdSmallest){
            ThirdSmallest=arr[i];
        }
    }

    cout<<"Third Smallest element in an array = "<<ThirdSmallest;

    
}