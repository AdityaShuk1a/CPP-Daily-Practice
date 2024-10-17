#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void reverseString(vector <string> &str) {
    stack<string> s;

    // Push all characters of the string onto the stack
    for (string c : str) {
        s.push(c);
    }
    
    // for (char c : str) {
    //     cout << c << " " << s.top();
    // }


    // Pop all characters from the stack and put them back into the string
    for (int i = 0; i < str.size(); i++) {
        str[i] = s.top();
        s.pop();
    }
}

int main() {
    vector <string> str = {"hello", "world," ,"how" ,"are" ,"you?"};
    reverseString(str);
    cout << "Reversed string is: " << endl; 
    for (string i: str){
    cout << i << endl;

    }
    return 0;
}