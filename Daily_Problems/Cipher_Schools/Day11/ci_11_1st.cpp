// Ques 1: You are given an array and target value. Your task is to find the target
//  value that exists in the array. If it exists inside an array then print YES otherwise NO.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: YES

#include <bits/stdc++.h>

using namespace std;

int main (){
    vector <int> a = {2,4,6,7,8};
    int c = 6;
    auto s = find(a.begin(), a.end(),c);
    if(s!=a.end()){
        cout << "yes";

    }
    else{
        cout << "NOOOOO";   
    }

}