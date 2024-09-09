#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> unique;
    vector <int> arr1;
    vector <int> arr2;

    int n,m;
    cin >> n >> m;

    for (int i=0; i<m+n; i++){
        int c;
        cin >> c;
        arr1.push_back(c);
    }

    for (int i=0; i<arr1.size(); i++){
        for (int j=i+1; j<arr1.size(); j++){
            if(arr1[i] == arr1[j]){
                arr1.erase(arr1.begin()+j);
                j--;
            }
        }
    }
    for (int i: arr1){
        cout << i << " ";
    }
    
    
    

}