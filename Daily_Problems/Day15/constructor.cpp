#include <bits/stdc++.h>
using namespace std;


class Mood{
    public:
    Mood(bool on){
        cout << on;
        cout << "on ho gaya " << endl;
    }
    ~Mood(){
        cout << "off ho gaya";
    }
};

int main (){
    
    // pehla x(3);
    Mood on(1);
    
    
}