// Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

// Example:

// Input: {1, 5, 3, 9, 2}
// Output: 9

#include <bits/stdc++.h>

using namespace std;

int main (){

    int arr[] = {1, 5, 3, 9, 2};
    auto max = INT_MIN;
    for (int i:arr){
        // int temp = 0;
        if (i>max){
            max = i;
        }
    }
    cout << max;
}