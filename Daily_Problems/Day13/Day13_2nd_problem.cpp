// You are using GCC
#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    for (int i=0; i<n ; i++){
        int a;
        cin >> a;
        vector <int> b;
        for (int j=0; j<a; j++){
            int c;
            cin >> c;
            b.push_back(c);
            
        }
        
        // for (int j=0; j<a; j++){
          
        //     int c;
        //     cin >> b.push_back(c);
            
        // }
        
        for (int j=0; j<b.size(); j++){
            
                auto min = min_element(b.begin(), b.end());
                
                cout << *min << " ";
                // auto min = min_element(b.begin(), b.end());
                b.erase(min);
                // j--;
                // b.erase(b.begin(),*min);
                
            
            
                auto max = max_element(b.begin(), b.end());
                cout << *max << " "; 
                
                b.erase(max);
                // j--;
            
            
        }
        cout << endl;
        
        
    }
    
    return 0;
}