#include<iostream>
using namespace std;

int  First(int n,int arr[],int k){
    int start = 0 , end = n-1 , first = -1 ;
    // first pos
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==k)
        {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<k)
        start = mid + 1;
        else 
        end = mid - 1;
    }
    return first;
}

int  Last(int n,int arr[],int k){
    int start = 0 , end = n-1 , last = -1;
    // last pos
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==k)
        {
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<k)
        start = mid + 1;
        else 
        end = mid - 1;
    }
    return last;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the target : ";
    cin>>k;

    cout<<"First Position = "<<First(n,arr,k)<<endl; 
    cout<<"Last Position = "<<Last(n,arr,k); 

}