#include<bits/stdc++.h>
using namespace std;

// int Reversing_using_Extra_array(int n,int arr[]) {
//     int temp[n];
//     int i = n-1;
//     int j = 0;

//     while(i>=0){
//         temp[j]=arr[i];
//         j++;
//         i--;
//     }
//     return temp[j];
// }

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;


    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Reversing_using_Extra_array(n,arr);

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}