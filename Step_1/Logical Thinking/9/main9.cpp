#include <bits/stdc++.h>
using namespace std;

int main(){

    int i, j, n, fix, count;
    cout<<"Enter number: ";
    cin>>n;

    for(i=n; i>0; i--){
        fix = 2*n-i;
        count = 0;
        for(j=0; j<fix; j++){
            if(j>=i-1){
                count++;
                if(count%2!=0)
                    cout<<"*";
                else
                    cout<<" ";
            }else    
                cout<<" ";
        }cout<<endl;    
    }
    for(i=0 ; i<n; i++){
        fix= 2*n-i-1;
        count = 0;
        for(j=0; j<fix; j++){
            if(j>=i){
               count++;
                if(count%2!=0)
                    cout<<"*";
                else
                    cout<<" ";
            }else
                cout<<" ";
        }cout<<endl;
    }
    return 0;
}