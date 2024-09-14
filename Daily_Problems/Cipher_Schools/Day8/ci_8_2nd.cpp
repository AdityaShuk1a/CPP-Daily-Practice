// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

// Sample Input:- String ="Hello, World!"
// character=’l’
// Output:- 3

#include<bits/stdc++.h>

using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c:str){
        if(ch == c){
            count++;
        }
    }
    return count;
}

int main (){
    string s = "Hello, World!";
    char character='l';
    string *ptr = &s;
    cout << countCharacter(*ptr, character);
}