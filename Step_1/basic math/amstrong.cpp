#include <bits/stdc++.h>
using namespace std;

string isAmstrong(int n){
    int len = floor(log10(n)+1), sum = 0, num = n;
    while(num!=0){
        sum = sum + pow(num%10, len);
        num = num/10;
    }if( sum == n)
        return "Yes";
    return "No";
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;
    cout<< isAmstrong(n);
}