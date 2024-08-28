/*
Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

Sample Output:-

Complex Number 1: 3 + 4i
Complex Number 2: 1 + 2i
Sum: 4 + 6i
Difference: 2 + 2i
*/

#include <iostream>
#include <complex> // Include the complex header

using namespace std;

int main() {
    string a,b;
    getline(cin, a);
    getline(cin, b);
    int r1,i1,r2,i2;
    r1 = (int)a[0]-48;
    r2 = (int)b[0]-48;
    for (int i=0; i<a.size(); i++){
        if (a[i]=='+' || a[i]=='-'){
            i1 = (int)a[i+1] -48 ;
        }

    }
    for (int i=0; i<b.size(); i++){
        if (b[i]=='+' || b[i]=='-'){
            i2 = (int)b[i+1] -48;
        }

    }
    
    cout << "add: "<< r1+r2 << "+" << i1+i2<<"i"<< endl;
    cout << "sub: "<< r1-r2 << "+" << i1-i2<<"i"<< endl;


    return 0;
}
