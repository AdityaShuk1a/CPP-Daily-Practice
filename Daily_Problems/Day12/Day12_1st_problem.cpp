#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {-4, -2, 1, 5, -3, 7, -5};
    vector<int> aa;
    vector<int> temp;

    int max_sum = INT_MIN;
    int sum = 0;

    for (int i = 0; i < a.size(); i++) {
        sum = 0;
        temp.clear();
        for (int j = i; j < a.size(); j++) {
            sum += a[j];
            temp.push_back(a[j]);
            if (sum > max_sum) {
                max_sum = sum;
                aa = temp;
            }
        }
    }

    for (int i : aa) {
        cout << i << " ";
    }
    cout << max_sum << endl;

    return 0;
}
