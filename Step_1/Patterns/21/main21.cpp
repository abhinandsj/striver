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

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
            else 
                cout<< " ";
        }cout<<endl;
    }
}