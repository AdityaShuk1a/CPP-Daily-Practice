// You are using GCC
#include <bits/stdc++.h>

using namespace std;

int main (){
    
    int n;
    cin >> n;
    
    vector <vector<int>> arr (n, vector<int>(n));
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            // int c;
            cin >> arr[i][j];
        }
    }
    vector <vector<int>> arr1 (n, vector<int>(n));
    vector <vector<int>> final (n, vector<int>(n));
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            // int c;
            cin >> arr1[i][j];
        }
    }
    int num;
    int sum;
    cout << "The product of the two matrices is: "<< endl;
    for (int m=0; m<n; m++){
        // sum = 0;
        for (int i=0; i<n; i++){
        // int me = 0;
           for (int j=0; j<n; j++){
               
            final[m][i] += arr[m][j] * arr1[j][i];
           }
        }
    
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            // int c;
            cout <<  final[i][j]<< " ";
        }
        cout << endl;
    }
    
}