// 2 2 2 2 2 
// 2 2 2 2 2
// 2 2 2 2 2
// 2 2 2 2 2
// 2 2 2 2 2
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no. u want to print : ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<m<<" ";
        }
        cout<<endl;
    }
}