/*
Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

Sample Input:- Enter grade 1: 85
Enter grade 2: 90
Enter grade 3: 78
Enter grade 4: 92
Enter grade 5: 88
*/

#include <bits/stdc++.h>
using namespace std;

//First problem

int main (){
    vector <int> grades;

    for (int i=0; i<5; i++){
        int c;
        cin >> c;
        grades.push_back(c);

    }
    int sum = 0;
    for (int i: grades){
        sum+=i;
    }
    cout << sum/5;

}