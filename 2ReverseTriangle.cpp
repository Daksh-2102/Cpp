// a
// a b
// a b c
// a b c d
// a b c d e
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch = 'a' + (j-1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}