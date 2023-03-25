#include <bits/stdc++.h>
using namespace std;
long long sumOfSeries(long long N) {
        if(N==1)
            return 1;
        else return N*N*N + sumOfSeries(--N);
}

int main(){
    long long n;
    cout<<"Enter number: ";
    cin>>n;
    cout<< sumOfSeries(n)<<endl;
}