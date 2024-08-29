#include<iostream>
using namespace std;

int SearchingIndex(int n,int arr[],int k){
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            index = i;
        }
    }
    return index;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the element to search : ";
    cin>>k;

    //SearchingIndex
    cout<<k<<" found at index = "<<SearchingIndex(n,arr,k);
}