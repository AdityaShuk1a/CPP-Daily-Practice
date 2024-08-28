/*
Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9

*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> a;
    for (int i=0; i<n; i++){
        int c;
        cin >>c ;
        a.push_back(c);
    }
    for (int i=0; i<a.size()-1; i++){
        for (int j=1; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for (int i:a){
        cout << i << " ";
    }
        
    
    return 0;
}
