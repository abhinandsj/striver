#include <bits/stdc++.h>
using namespace std;

int countDigits( int n){
    int num, digit, count;
    num = n; count = 0;
    while( num!=0){
        digit = num%10;
        if( digit !=0 && n%digit == 0 )
            count++;
        num = num/10;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;
    cout<< countDigits(n);
}