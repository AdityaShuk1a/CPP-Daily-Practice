#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     stack <string> a;
//     string s = " ";
//     while (s!="-1"){
//         cin >> s;
//         a.push(s);
//     }
//     while(!a.empty()){
//         cout << a.top() << " " ;
//         a.pop();
//     }
//     return 0;
// }


void insertBottom(stack <int>& a){
    if(a.empty()){  
        int c;
        cin >>c;
        a.push(c);
        return;
    }
    int num = a.top();
    a.pop();
    
    insertBottom(a);
    a.push(num);

}

int main()
{
    stack <int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    insertBottom(a);
    while(!a.empty()){
        cout << a.top() << " ";
        a.pop();
    }
    return 0;
}


