/*
Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
Addition
Subtraction
Multiplication
Division (ensure that you handle division by zero)
Modulus

Sample Output :-

Enter first integer: 10
Enter second integer: 3
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3.33333
Modulus: 1
*/

#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int b;
    cin >> n >>b;

    cout << "addition: " << n+b << endl;;
    cout << "Substraction: " << n-b << endl;;
    cout << "multiplication: " << n*b << endl;;
    if (n == 0 || b== 0){
        cout << "0"<< endl;
    }
    else{
        
    cout << fixed << setprecision(5) << "Division: " << static_cast<float>(n) / b << endl;
    }
    cout << "modulus: " << n%b<< endl;

    return 0;
}