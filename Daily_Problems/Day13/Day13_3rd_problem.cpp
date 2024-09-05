// You are using GCC
#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,k;
    cin >> n;
    vector <int> crops;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        crops.push_back(x);
    }
    cin >> k;
    if ((n-1)%(k-1)!=0){
        cout << -1<<endl;
        return 0;
    }
    vector <vector <int>> dp(n, vector<int> (n,0));
    vector <int> prefixSum(n+1,0);
    for (int i=0;i<n;++i){
        prefixSum[i+1]=prefixSum[i] + crops[i];
    }    
    for (int len = k; len<=n; ++len){
        for (int i=0; i+len<=n; ++i){
            int j=i+len-1;
            dp[i][j] = INT_MAX;
            for (int m=i; m<j; m+=k-1){
                dp[i][j] = min(dp[i][j],dp[i][m]+dp[m+1][j]);
            }
            if ((j-i)%(k-1)==0){
                dp[i][j]+= prefixSum[j+1] -prefixSum[i];
                
            }
        }
        
    }
    cout << dp[0][n-1];
    return 0;
}