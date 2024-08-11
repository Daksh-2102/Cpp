#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++){
        arr[i]= 'a' + i;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}