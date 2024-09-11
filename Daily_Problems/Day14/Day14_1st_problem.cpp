#include <bits/stdc++.h>

using namespace std;

void reverse(vector <int> m){
    int i = 0;
    if(m.size() == i){
        return;
    }
    i++;
    reverse(m);
    int j = 0;
    cout << m[j] << " ";
    j++;

}

int main (){
    vector <int> a = {1,2,3,4,5,6,7,8,9};
    reverse(a);
    return 0;
}