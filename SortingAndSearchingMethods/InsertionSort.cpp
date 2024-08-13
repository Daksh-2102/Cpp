#include<iostream>
using namespace std;

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

void Swap(int &a ,int &b){
    int t = a;
    a = b;
    b = t;
}

void Insertion_Sort(int n,int arr[]){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1])
            Swap(arr[j],arr[j-1]);
            else 
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
     
    cout<<"Enter the elements of an array : ";
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array Before Insertion Sort : ";
    display(n,arr);

    Insertion_Sort(n,arr);
    cout<<"Array After Insertion Sort :  ";
    display(n,arr);

    return 0;

}