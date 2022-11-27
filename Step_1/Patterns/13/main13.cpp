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
    int i, j, count;
    count= 0;

    for( i = 1; i <= n; i++ ){
        for(j = 0; j < i; j++ ){
            count++;
            cout<<count<<" ";
        }cout<<endl;
    }   
}

