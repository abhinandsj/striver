#include <bits/stdc++.h>
using namespace std;

int slargest(int arr[], int n){
    int largest = INT_MIN , second = INT_MIN;
    for(int i=0; i<n ; i++)
        if(arr[i]> second){
            if(arr[i]>largest){
                second = largest;
                largest = arr[i];
            }else if(arr[i]!=largest) 
                second = arr[i];
        }
    if( largest == second || second == INT_MIN )
        return -1;
    return second;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>> size;
    int a[size];
    cout<<"Enter array: ";
    for(int i=0; i< size; i++)
        cin>>a[i];
    cout<< "Second Largest in the array: " << slargest(a,size);
}