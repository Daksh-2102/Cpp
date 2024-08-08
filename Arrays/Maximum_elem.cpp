#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"size of array : ";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements of array :- ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    for(int i=1;i<=n;i++){
       if(arr[i]>max) {
           max=arr[i];
       }
    }
    cout<<"Maximum element = "<<max;
    

}