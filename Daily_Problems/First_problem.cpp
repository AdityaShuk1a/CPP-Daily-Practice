#include <bits/stdc++.h>
using namespace std;

/*
Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

Sample Input:- Enter the first number: 10
Enter the second number: 20
Enter the third number: 15

Sample Output :- The largest number is: 20
*/

int main (){
    int a,b;
    cin >> a >> b;
    int r = a>b?a:b;
    cout << "Largest number is: " <<r;

}