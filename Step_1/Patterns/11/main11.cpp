#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i, j;

    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<(i+j)%2<<" ";
        }cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;
    pattern(n);
    return 0;
}