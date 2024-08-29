/*
Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

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
    int a [3][3] = {1,2,3,4,5,6,7,8,9};
    int j = 0;
    int key = 0;;
    for (int i=0; i<3; i++){
        if(key%2==0){
        for (int k =  0; k<3; k++){
            if(k==3){
                key = a[i][k];
            }
            cout << a[k][i] << " ";
            
        }
        cout << endl;

        }
        else {
            for (int k=2; k>=0; k--){
                cout << a[k][i] << " ";
            }
            cout << endl;
        }
        
        j+=1;
    }
        
    
    return 0;
}
