#include <bits/stdc++.h>
using namespace std;

int main(){

    int i, j, n;
    cout<<"Enter number: ";
    cin>>n;

    for(i=n; i>0; i--){
        for(j=0; j<2*n-1; j++){
            if(j>=i-1)
                if(j< 2*n-i)
                    cout<<"*";
                else
                    break;
            else    
                cout<<" ";
        }cout<<endl;    
    }

    return 0;
}