#include <bits/stdc++.h>
using namespace std;

/*
Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

Sample Input:- Enter a number: 5
Sample Output:- The sum of the first 5 natural numbers is: 15"
*/

int main (){
    int n;
    cin >> n;
    int sum = 0;
    for (int i =0; i<n; i++){
        sum+=i;
    }    
    cout << sum;
}