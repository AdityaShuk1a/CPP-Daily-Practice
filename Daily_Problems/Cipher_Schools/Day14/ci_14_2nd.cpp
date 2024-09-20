#include <bits/stdc++.h>

using namespace std;


// Ques 2: Write a program that defines a Rectangle class with a copy constructor

class Rectangle{
    public:
    int l;
    int b;
    Rectangle(int length, int breath){
        this->l = length;
        this->b = breath;
        
         
    }
};


int main(int argc, char const *argv[])
{
    Rectangle rect(10,20);
    Rectangle rect2 = rect;

    cout << "rectangle 1  " << rect.l << "  " << rect.b << endl;
    cout << "rectangle copy   " << rect2.l << "  " << rect2.b << endl;

    return 0;
}
