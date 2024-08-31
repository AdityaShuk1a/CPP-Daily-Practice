#include <bits/stdc++.h>
// Largest elemnt in the array
using namespace std;



int LargestEle(vector<int> &n){
    sort(n.begin(), n.end());
    return n.back();
}
int secondLargest(vector <int> &n){

    sort(n.begin(),n.end());
    
    for (int i=0; i<n.size()-1; i++){
        
        if (n[i] == n[i+1]){
            n.erase(n.begin()+i);

            i--;
        }
    }
    return n[n.size()-2];
}

int main (){
    vector <int> n= {2,4,6,7,2,3,5,7,8,7,32,32,1};
    
    cout << "Largest element is: " << LargestEle(n) << endl;; 
    cout << "second largest element: " << secondLargest(n) << endl; 
    sort(n.begin(), n.end());
    for (int i: n){
        cout << i << endl;
    }
    return 0;
}