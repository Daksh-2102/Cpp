// n = 5 :--
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";// Columns
        }
        cout<<endl;
    }
}
