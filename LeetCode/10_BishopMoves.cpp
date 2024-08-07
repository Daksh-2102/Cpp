#include<bits/stdc++.h>
using namespace std;

int BishopSteps(int A,int B){
    int count = 0;

    count+=min(8-A,8-B);
    count+=min(8-A,B-1);
    count+=min(A-1,B-1);
    count+=min(A-1,8-B);

    return count;
}

int main(){
    int A;
    cout<<"No. of steps Taken rowwise : - A = : ";
    cin>>A;

    int B;
    cout<<"No. of steps Taken Columnwise :- B = : ";
    cin>>B;

    cout<<"Total Steps Taken by Bishop = "<<BishopSteps(A,B);

}