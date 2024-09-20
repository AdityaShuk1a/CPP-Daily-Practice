#include <bits/stdc++.h>

using namespace std;

// Ques 1: Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.

int main(int argc, char const *argv[])
{

    int r = 2;
    int c = 2;

    vector <vector <int>> a(r,vector <int> (c,0));

  

    int key = 3;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }
    bool found = false;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (a[i][j] == key) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}