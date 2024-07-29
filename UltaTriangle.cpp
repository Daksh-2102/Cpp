// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // Rows
    for(int i=n;i>=1;i--){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}