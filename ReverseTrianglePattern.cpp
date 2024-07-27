// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}