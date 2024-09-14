// Ques 2: You are given an array and target value. You have to find the index of target value.
//  If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3

#include <bits/stdc++.h>


using namespace std;

int main (){
    vector <int> a = {2,4,6,7,8};
    int c = 6;
    auto s = find(a.begin(), a.end(),c);
    if(s!=a.end()){
        cout << distance(a.begin(),s)+1;

    }
    else{
        cout << "NOOOOO";   
    }

}