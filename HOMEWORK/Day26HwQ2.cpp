#include<iostream>
using namespace std;

void display(int n,char arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void Character_Sorting(int n,char arr[]){
    //Character sorting using bubble sort
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    char arr[1000];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array Before Sorting : ";
    display(n,arr);

    Character_Sorting(n,arr);
    cout<<"Array After Sorting : ";
    display(n,arr);
}