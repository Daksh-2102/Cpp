// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout<<j<<" ";// Columns
        }
        cout<<endl;
    }
}
