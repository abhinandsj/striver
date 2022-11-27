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
    char alphabet='A';

    for(i=1; i<=n; i++){
        for(j=0; j<i; j++)
            cout<<alphabet;
        cout<<endl;
        alphabet+=1;
    }
}