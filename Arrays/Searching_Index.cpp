#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int element ;
    cout<<"Element to search : ";
    cin>>element;

    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            index = i;
            break;
        }
        cout<<element<<" found at index = "<<index;
    }
    //return -1;

   
    
}