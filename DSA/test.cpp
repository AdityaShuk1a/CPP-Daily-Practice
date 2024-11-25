#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> values(n);
        for (int i = 0; i < n; ++i) {
            cin >> values[i];
        }

        int sum = 0;  // Renamed t to sum to avoid conflict
        sort(values.begin(), values.end());
        for(int i = 0; i < k; i++){
            sum += values[i];
        }
        cout << sum << endl;
    }

    return 0;
}
