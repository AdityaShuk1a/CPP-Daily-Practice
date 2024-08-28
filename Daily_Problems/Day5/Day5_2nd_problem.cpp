/*
Ques-02 Write a C++ function that takes a string as input and reverses it.

Sample Input:
Enter a string: CipherSchools

Sample Output:
Reversed string: sloohcSrehpiC
*/

#include <bits/stdc++.h>
using namespace std;
int main (){
    
    string s;
    getline(cin,s);
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}