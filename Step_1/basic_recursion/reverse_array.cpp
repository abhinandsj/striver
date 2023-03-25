#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    if(n >= (*(&arr + 1) - arr)/2){
        swap(arr[n], arr[*(&arr + 1) - arr -n]);
        reverse(arr, n-1);
    }
}

void printArray(int arr[], int n){
    // cout<<*(&arr + 1) - arr;
    for(int i=0; i < n; i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[5] = {0,1,2,3,4};
    reverse(arr, 5);
    printArray(arr, 5);

}