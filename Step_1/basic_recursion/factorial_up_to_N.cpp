#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n){
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
vector<long long> factorialNumbers(long long N){
    vector<long long> vec;
    for(long long i=1; factorial(i)<=N; i++)
        vec.push_back(factorial(i));
    return vec;
}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    vector<long long> vec;
    vec = factorialNumbers(n);
    for(int i = 0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
}