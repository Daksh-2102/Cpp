#include<iostream>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void  Rotate_Array_by_K_Steps(int arr[],int i,int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    cout<<"Enter the size of an Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the no. of rotations : ";
    cin>>k;

    if(k>n){
        k=k%n;
    }

    cout<<"Original Array :- ";
    display(n,arr);
    
    //rotate whole array
    Rotate_Array_by_K_Steps(arr,0,n-1);
    //rotate 0 - k
    Rotate_Array_by_K_Steps(arr,0,k-1);
    //rotate k+1 - n-1
    Rotate_Array_by_K_Steps(arr,k,n-1);

    cout<<"Rotated Array :- ";
    display(n,arr);



}