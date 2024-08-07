#include<iostream>
using namespace std;

bool NimGame(int N,int player1,int player2){
    if(N%4==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){

    int N;
    cout<<"N is the last number : ";
    cin>>N;

    // It is a game where two players has to choose no. and the player who chooses the last no. wins
    int player1;
    cout<<"Number choosen by player1 : ";
    cin>>player1;

    int player2;
    cout<<"Number choosen by player2 : ";
    cin>>player2;

    if(NimGame(N,player1,player2)==1){
        cout<<"Player1 wins the Game";
    }
    else{
        cout<<"Player2 wins the Game";
    }
    
}