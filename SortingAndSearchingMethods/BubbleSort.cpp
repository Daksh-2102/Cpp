#include<iostream>
using namespace std;

void Swap(int &x,int &y){
    int t = x;
    x=y;
    y=t;
}

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void Bubble_Sort(int n,int arr[]){
    // Bubble Sort 
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                Swap(arr[j],arr[j+1]);
            }
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

    Bubble_Sort(n,arr);
    cout<<"Array After Sorting : ";
    display(n,arr);

}