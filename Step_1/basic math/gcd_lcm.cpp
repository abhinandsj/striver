#include <bits/stdc++.h>
using namespace std;

long long gcd(long long p, long long q){
    if(q==0)
        return p;
    return gcd(q, p%q);
}

vector<long long> gcdLcm(long long x, long long y){
    vector<long long> v;
    v.push_back(gcd(x,y));
    v.push_back(x*y/gcd(x,y));
    return v;
}

int main(){
    long long x, y;
    cout<<"Enter two numbers: ";
    cin>> x>> y;
    vector<long long>  vec = gcdLcm(x,y);
    cout<< vec[0] << " " <<vec[1];
}