#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<ch<<" is Vowel";
    }
    else{
        cout<<ch<<" is Consonant";
    }
}