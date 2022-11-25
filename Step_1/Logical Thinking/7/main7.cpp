#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, n, fix;
    cout<<"Enter number: ";
    cin>>n;
    fix = 2*n;
    for(i=n; i>0; i--){
        for(j=0; j<fix; j++){
            
            if(j>=i-1 ){
                if(j< fix-(i-1)-1)
                    cout<<"*";
            }else
                cout<<" ";
                
        }cout<<endl;
    }
}