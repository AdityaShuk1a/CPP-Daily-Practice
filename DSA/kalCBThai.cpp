// You are using GCC
#include <bits/stdc++.h>
using namespace std;


void q(vector <int>& h, int s, vector <int> a){
    for(int i  = 0; i< a.size(); i++){
        int k = a[i];
        int ind = k%s;
        int j  = 0;
        while(h[(ind+j*j)%s] !=-1){
            j++;
        }
        h[(ind+j*j)%s] = k;
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0;i <n; i++){
        cin >> arr[i];
    }
    
    int s;
    cin >> s;
    
    vector <int> h(s,-1);
    
    q(h, s, arr);
    
    for(int i = 0; i<s; i++){
        if(h[i]!=-1){
            cout << h[i] << " ";
        }
    }
    
}