#include<iostream>
using namespace std;

int kth_Missing_Positive_Number(int n,int arr[],int k){
   
    int start = 0 , end = n-1 , mid , ans = n;

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]-mid-1 >= k){
            ans = mid ;
            end = mid -1 ;
        }
        else {
            start = mid+1;
        }
    }
    return ans+k;
}


int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[1000];
    cout<<"Enter the elements of an array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the kth missing no. to search : ";
    cin>>target;

   
    cout<<"Kth Missing postive number = "<<kth_Missing_Positive_Number(n,arr,target);
}