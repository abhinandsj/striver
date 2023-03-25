#include <bits/stdc++.h>
using namespace std;

int sumDiv(int n){
    long long sum = 0;
    for(int i=1;i<=n;i++)
        sum+=(n/i)*i;

    return sum;
}

int main(){
    int n;
    cout<< "Enter number: ";
    cin>> n;
    cout<< sumDiv(n);
}