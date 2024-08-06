#include<iostream>
using namespace std;

char Convert(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}

int main(){
    char ch;
    cin>>ch;

    cout<<Convert(ch);

}