/*
Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
Assuming that string contains only lowercase.

Sample Input:
Enter a string: cipherschools

Sample Output:
Number of vowels: 4
Number of consonants: 9
*/

#include <bits/stdc++.h>
using namespace std;
int main (){
    
    string s;
    getline(cin,s);
    int v,c;
    v=0;
    c=0;  
    for (char i:s){
        if(i=='a' || i=='e' || i== 'o' ||i=='i' || i=='u'){
            v+=1;
        }
        else{
            c+=1;
        }
    }
    cout << "vowel: "<< v<<endl;
    
    cout << "consonent: "<< c<<endl;

    return 0;
}