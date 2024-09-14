// Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

// Sample Input:- str1 = "Hello, World!"
// Output:- 13

#include <bits/stdc++.h>

using namespace std;

int lenSTR(string s){
    int c=0;

    for (char cc: s){
        c++;
    }
    return c;
}

int main (){
    string a = "Hello, World!";
    cout << (lenSTR(a));
}