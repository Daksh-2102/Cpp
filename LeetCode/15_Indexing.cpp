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

    int element;
    cout<<"Enter the element to search : ";
    cin>>element;

    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            index = i;
            break;
        }
    }
   if(index==-1)  cout<<element<<" not found and index = "<<index;
   else  cout<<element<<" found at index = "<<index;

}