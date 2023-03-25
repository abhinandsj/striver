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

    for(i=0; i<n; i++){
        for(j=0; j<2*n; j++){
            if(j< n-i || j> n+i-1)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
    for(i=0; i<n; i++){
        for(j=0; j<2*n; j++){
            if(j<=i || j>=2*n-i-1)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
}