// Break--> it breakes the statement
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    int x;
    cout<<"Enter x :";
    cin>>x;

    int i=1;
    while(i<=n){
        if(i==x){
            cout<<i;
            break;
        }
        cout<<i<<endl;
        i++;
    }
}