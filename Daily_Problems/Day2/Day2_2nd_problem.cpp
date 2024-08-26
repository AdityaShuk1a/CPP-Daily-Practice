#include <bits/stdc++.h>
using namespace std;

/*
Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B"
*/

int main (){
    int score;
    cin >> score;

    if(score>=90 && score <=100){
        cout << "A";
    }
    else if(score>=80 && score <90){
        cout << "B";
    }
    else if(score>=70 && score <80){
        cout << "C";
    }
    else if(score>=60 && score <70){
        cout << "D";
    }
    else if(score>=0 && score <60){
        cout << "E";
    }

}