#include<bits/stdc++.h>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void Selection_Sort(int n,int arr[]){
    // Selction Sort code part
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    cout<<"Enter the elements of an array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array Before Sorting : ";
    display(n,arr);

    Selection_Sort(n,arr);
    cout<<"Array After Sorting : ";
    display(n,arr);

}