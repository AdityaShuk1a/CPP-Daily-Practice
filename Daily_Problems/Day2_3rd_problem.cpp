#include <bits/stdc++.h>
using namespace std;

/*
Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

Sample Input:-Enter a number : 5
Sample Output :- The month is: May"
*/

int main (){
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int a;
    cin >> a;
    switch (a){
        case 1:
        cout << "The month is: "<< months[a-1];
        break;
        case 2:
        cout << "The month is: "<< months[a-1];
        break;
        case 3:
        cout << "The month is: "<< months[a-1];
        break;
        case 4:

        cout << "The month is: "<< months[a-1];
        break;
        case 5:
        cout << "The month is: "<< months[a-1];
        break;
        case 6:
        cout << "The month is: "<< months[a-1];
        break;
        case 7:
        cout << "The month is: "<< months[a-1];
        break;
        case 8:
        cout << "The month is: "<< months[a-1];
        break;
        case 9:
        cout << "The month is: "<< months[a];
        break;
        case 10:
        cout << "The month is: "<< months[a];
        break;
        case 11:
        cout << "The month is: "<< months[a];
        break;
        case 12:
        cout << "The month is: "<< months[a];
        break;
        
    }

    

}