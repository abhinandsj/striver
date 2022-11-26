#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i, j, range;

    for(i=1; i<10; i++){
        if(i<n)
            range = i%n;
        else
            range = n - i%n;
        for(j=0; j<range; j++){
            cout<<"* ";
        }cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    pattern(n);

    return 0;
}