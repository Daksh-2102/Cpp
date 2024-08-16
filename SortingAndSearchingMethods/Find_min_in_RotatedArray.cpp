#include<iostream>
using namespace std;

int Min_In_Rotated_Array(int n,int arr[]){
    int start = 0, end = n-1;
    int ans = arr[0];

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            ans=arr[mid];
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of an array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Minimum element in rotated array = "<<Min_In_Rotated_Array(n,arr);
}