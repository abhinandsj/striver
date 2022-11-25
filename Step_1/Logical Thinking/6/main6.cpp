#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j , n;
    cout<< "Enter number: ";
    cin>>n;

    for(i = n; i> 0; i--){
        for(j = 0; j <i; j++)
            cout<<j+1<<" ";
        cout<<endl;
    }
}