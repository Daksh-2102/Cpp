#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array :- ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int min = arr[0];
    for(int i=1;i<=n;i++){
       if(arr[i]<min) {
           min=arr[i];
       }
    }
    cout<<"Minimum element = "<<min;

}