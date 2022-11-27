#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i, j, count;
    
    for(i=0; i<n; i++){
        j=0;
        count = 0;
        while(j<2*n){
            if(j>=(i+1) && j<(2*n-(i+1)))
                cout<<"  ";
            else if(j<i+1)
                cout<<(count+1)<<" ";
            else if( j>=(2*n-(i+1)))
                cout<<(2*n - count)<<" ";
            count++;   
            j++;
        }cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;
    pattern(n);
    return 0;
}