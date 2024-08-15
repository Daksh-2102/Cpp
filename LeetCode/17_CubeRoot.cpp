#include<iostream>
using namespace std;

int Sqrt(int k){
    int start = 0 , end = k,ans;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(mid*mid==k){
            ans = mid;
            break;
        }

        else if(mid*mid<k){
            ans=mid;
            start=mid+1;
        }

        else 
        end=mid-1;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number  : ";
    cin>>n;

    cout<<"Square Root of "<< n <<" = "<<Sqrt(n);

}   