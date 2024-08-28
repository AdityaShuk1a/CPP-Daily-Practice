/*
Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

Sample Input:- Enter a number: 4
Sample Output:- The factorial of 4 is: 24"
*/

#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int sum;
    sum = 1;
    cin >> n;
    for (int i=2; i<=n; i++){
        sum*=i;
    }
    cout << sum;
    return 0;
}