#include <bits/stdc++.h>

using namespace std;


// Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.


int main(int argc, char const *argv[])
{
    int r = 2;
    int c = 2;

    vector <vector<int>> a (r, vector<int> (c));

    cout << "enter val" << endl;

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            sum+=a[i][j];
        }
    }

    cout << "heres your cute sum: " << sum;

    return 0;
}
