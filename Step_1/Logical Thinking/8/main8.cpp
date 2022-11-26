#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter number: ";
    cin>> n;
    for(i = n; i>0 ;i--){
        for(j = 0; j < n+i-1; j++){
            if(j>= n-i)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;      
    }
}