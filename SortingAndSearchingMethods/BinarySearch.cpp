#include<iostream>
using namespace std;

void display(int n ,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void Bubble_Sorting(int n,int arr[]){
    // Bubble Sort 
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int Binary_Search(int arr[],int n,int k){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==k) return mid;
        if(arr[mid]<k)  low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of an Array : ";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    int k;
    cout<<"Enter the element to Search : ";
    cin>>k;

    cout<<"Original Array : ";
    display(n,arr);

    Bubble_Sorting(n,arr);
    cout<<"Sorted Array : ";
    display(n,arr);



    int result = Binary_Search(arr,n,k);

    if(result==-1){
        cout<<k<<" not found";
    }
    else {
    cout<<k<<" found at index = "<<result;
    }


}

