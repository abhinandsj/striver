#include <bits/stdc++.h>
using namespace std;

long long bin_convert(long long n){
    int arr[32], i=0;
   long long result=0;
   while(i<32){
        arr[i]= n%2;
        result = result + arr[i]*pow(2, 31-i);
        n=n/2;
        i++;
   }return result;

}


int main(){
    long long binary;
    cout<<"Enter binary number: ";
    cin>> binary;
    cout << bin_convert(binary);
    return 0;

}