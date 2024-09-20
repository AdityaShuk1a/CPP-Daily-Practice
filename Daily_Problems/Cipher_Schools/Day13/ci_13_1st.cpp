#include <bits/stdc++.h>
using namespace std;

// Write C++ program to demonstrate how to create dynamic variable using new keyword.

int main(int argc, char const *argv[])
{

    int *d = NULL;
    d = new int;

    *d = 43;

    cout << *d;

    delete d;

    d = NULL;

    return 0;
}
