#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
    int large = arr[0];
    for(int i=1; i< n; i++)
        if(arr[i]>large)
            large=arr[i];
    return large;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>> size;
    int a[size];
    cout<<"Enter array: ";
    for(int i=0; i< size; i++)
        cin>>a[i];
    cout<< "Largest in the array: " << largest(a,size);
}