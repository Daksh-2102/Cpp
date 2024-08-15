#include<iostream>
using namespace std;

int Peak_Index_in_Mountain(int n,int arr[]){
    int start = 0 , end = n-1;

    while(start<=end){
        int mid = end + (start-end)/2;

        if(arr[mid]>arr[mid-1]  && arr[mid]>arr[mid+1])
        return mid;

        else if(arr[mid]>arr[mid-1])
        start = mid-1;

        else 
        end = mid-1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Peak index = "<<Peak_Index_in_Mountain(n,arr);
}