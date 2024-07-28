#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // Rows
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        // space
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //number
        for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}