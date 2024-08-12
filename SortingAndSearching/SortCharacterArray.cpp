#include<bits/stdc++.h>
using namespace std;

// void display(int n,char arr[]){
//     for(char i='a';i<='z';i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
// }

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    cout<<"Enter the elements of an array : ";
    char arr[n];
    for(char i=65;i<=90;i++){
        cin>>arr[i];
    }

    cout<<" Character Array Before Sorting : ";

    for(char i=65;i<=126;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    // display(n,arr);
}