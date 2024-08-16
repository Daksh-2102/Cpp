#include<iostream>
using namespace std;

int Search_Element_in_Rotated_Array(int n,int arr[],int target){

    int start=0,end=n-1,mid;

    while(start<=end){
        mid = start + (end-start)/2;
       if(arr[mid]==target){
        return mid;
       } 

       else if(arr[mid]>=arr[0]){
        // left side sorted
        if(arr[start]<=target && target<=arr[mid]){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
       }

       else {
        // rightside sorted
        if(arr[mid]<=target && target<=arr[end]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
       }
    }
    return -1;
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

    int target;
    cout<<"Enter the element to search in rotated in array : ";
    cin>>target;

    cout<<"Index of taregt in Rotated array = "<<Search_Element_in_Rotated_Array(n,arr,target);
    
}