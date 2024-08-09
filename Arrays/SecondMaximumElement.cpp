#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;


    int arr[n];
    cout<<"Enter the elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int max = arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]>max) {
           max=arr[i];
       }
    }
    
    int Smax = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]>Smax){
            Smax=arr[i];
        }
    }
    cout<<"First Largest Elemnt = "<<max<<endl;
    cout<<"Second Largest element = "<<Smax;
}