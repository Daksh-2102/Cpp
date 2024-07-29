// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        // Print "*" row times
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        // Print space (2n-2i)times
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        // Print "*" row times
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
       for(int i=1;i<=n;i++){
        // Print "*" row times
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        // Print space (2n-2i)times
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        // Print "*" row times
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}