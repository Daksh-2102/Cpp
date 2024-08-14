#include<iostream>
using namespace std;

int Insert_Search_Position(int n,int arr[],int k){
    int start = 0 , end = n-1;
    int mid , index = n;

    while(start<=end){
        mid  = start + (end-start)/2;

        if(arr[mid]==k)
        {
            index = mid;
            break;
        }

        else if(arr[mid]<k){
            start = mid + 1;
        }

        else {
            index = mid;
            end = mid - 1;
        }
    }
    return index;
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

   cout<<"Inserting position of "<< k<<" is at index = "<<Insert_Search_Position(n,arr,k);

    

}