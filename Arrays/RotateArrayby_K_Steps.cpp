#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void reverse(int arr[],int start,int end){
    while(start<end) {
        int temp = arr[start];
        arr[start ] = arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int n;
    cout<<"Size of an Array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the no. of Rotations : ";
    cin>>k;

    if(k>n){
        k=k%n;
    }
    cout<<"Array before Rotation :"<<endl;
    display(arr,n);

    cout<<"After Rotating by k steps :"<<endl;
    
    // revering whole array
    reverse(arr,0,n-1);
    // reverse by k steps
    reverse(arr,0,k-1);
    //reverse rest elements
    reverse(arr,k,n-1);

    display(arr,n);
    return 0;

}