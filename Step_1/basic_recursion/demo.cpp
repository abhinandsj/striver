#include <bits/stdc++.h>
using namespace std;

void fun(int i){
    
    if(i!=0){
        fun(i-1);
    cout<< i << endl;
    }
}

int main(){
    int i = 10;
    fun(i);
}