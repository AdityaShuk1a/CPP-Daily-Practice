// You are using GCC
#include <bits/stdc++.h>

using namespace std;



int main (){
    int sum = 0;
    vector <int> num;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        num.push_back(x);
        
    }
    for (int i: num){
        sum+=i;
    }
    int flag = 0;
    int i =0;
    // cout << sum;
    while (i<num.size()){
        flag = 0;
        sum = sum - num[i];
        // cout << sum << endl;
        for (int j=2; j<sum; j++){
            if(sum%j==0){
                flag = 1;
                break;
                
            }
            // else {
            //     flag = 0;
            //     // break;
                
            // }
        
        }
        if(flag == 0){
            cout << sum << " ";
            break;
        }
        
        else{
            sum+=num[i];
        }
        i++;
    }
    // for (int i: num){
    //     cout << i << " ";
    // }
    if (flag == 1){
        cout << "No valid prime sum found";
    }
}