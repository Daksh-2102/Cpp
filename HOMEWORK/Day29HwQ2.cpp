#include<iostream>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void Insertion_sort(int n,int arr[]){
    for(int i=n-2;i>=0;i--){
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            else
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array Before Sorting : ";
    display(n,arr);

    Insertion_sort(n,arr);
    cout<<"Array After Sorting : ";
    display(n,arr);
}