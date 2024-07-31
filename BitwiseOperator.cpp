// Bitwise Operator --> &(AND) , |(OR) , ^(EXCLUSIVE OR) , ~(1s COMPLIMENT) , <<(LEFT-SHIFT) , >>(RIGHT SHIFT)
#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1. & -> BITWISE AND
    int a = 2 & 3;
    cout<<"AND : "<<a<<endl;;
    // 2. | -> BITWISE OR
    int b = 2 | 3;
    cout<<"OR : "<<b<<endl;;
    // 3. ^ -> EXCLUSIVE OR
    int c = 2^3;
    cout<<"EXCLUSIVE OR : "<<c<<endl;
    // 4. << -> LEFT SHIFT // number * 2^n;
    int d = 5<<2;
    cout<<"LEFT SHIFT : "<<d<<endl;
    // 5. >> -> RIGHT SHIFT // number / 2^n;
    int e = 6>>1;
    cout<<"RIGHT SHIFT : "<<e<<endl;
    // 6. ~ -> COMPLIMENT 
    int f = ~5;
    cout<<"COMPLIMENT : "<<f<<endl;
    // ~2 -> -3 , ~9 -> -10 and so on
}

