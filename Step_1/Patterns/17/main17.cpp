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
    char alphabet;

    for(i= n; i> 0; i--){
        alphabet = 'A';
        for(j= 0; j<2*n-i; j++){
            if(j<i-1)
                cout<<" ";
            else if(j>=n-1){
                cout<<alphabet;
                alphabet-=1;
            }
            else{
                cout<<alphabet;
                alphabet+=1;
            }
            

        }cout<<endl;
    }
}