// a a a a a 
// b b b b b
// c c c c c 
// d d d d d 
// e e e e e
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        char ch = 'a' + (i-1); // char + row -1
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}