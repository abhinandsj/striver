#include <bits/stdc++.h>
using namespace std;

void isPalindrome(int n)
{
    int num = n, res = 0;
    while (num != 0)
    {
        res = res * 10 + num % 10;
        num = num / 10;
    }
    if (res == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    isPalindrome(n);
}