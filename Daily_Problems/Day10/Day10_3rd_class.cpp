#include <bits/stdc++.h>
/*
contructor method ka naam same hota hai class ke and koi return type nhi ha
these are the three things
constructor method initialize in class
one class can have multiple constructor called constructor overloading 
constructor me agar koi parameter hai aur class me 2 constructor hai to wo run krega jiska parameter usse match kre
copy constructor jab huum constructor me ek object ko parameter me ppass kre and main function me object banake pass karde that is copy constructor and object 

*/
using namespace std;
class room {
    public:
    int length;

    room (){
        cout << "skdfj" << endl;

    }
    room (int l){
        cout << "second" << endl;
        length = l;
    }
    room (room &r1){
        length = r1.length;

    }
    ~room(){
        cout << "everything is deleted not everything but object (memory free ho gayi bhai mauj kar)" << endl;
    }

};

int main(){
    room r;// default constructor call krega
    room r2(2); // second constructor call krega
    room r3(r2);
    cout << r3.length;

    return 0;
}
