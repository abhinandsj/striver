#include <bits/stdc++.h>
using namespace std;

void pattern(int );

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    pattern(n);

    return 0;
}

void pattern(int n){
    int i, j;
    char alphabet;

    for(i = 1; i<=n; i++){
        alphabet = 'A' + n-1;
        for(j = i; j>0; j--){
            cout<<alphabet<<" ";
            alphabet-=1;
        }cout<<endl;

    }
}