// Continue--> Skip 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

   

    
    for(int i=1;i<=n;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
     
}