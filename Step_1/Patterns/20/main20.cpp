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

    for(i=1; i<2*n; i++){
        for(j=0; j<2*n; j++){
            if(j< n-(n-i)%n|| j>= 2*n- i%n)
                cout<<"*";
            else    
                cout<<" ";
        }cout<<endl;
    }
}