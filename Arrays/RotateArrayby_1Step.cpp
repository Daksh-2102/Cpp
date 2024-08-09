#include<iostream>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void  Rotate_by_1_Step(int n,int arr[]){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;


    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Before Rotating : ";
    display(n,arr);
    

    Rotate_by_1_Step(n,arr);
    cout<<"After Rotating : ";
    display(n,arr);

}