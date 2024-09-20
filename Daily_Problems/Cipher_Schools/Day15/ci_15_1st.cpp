#include <bits/stdc++.h>

using namespace std;

// Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.
class Student{
    public:
    string name;
    int roll;
    Student(string n, int r){
        this->name = n;
        this->roll = r;
        
         
    }
};



int main(int argc, char const *argv[])
{
    Student s("chalu pandey", 68);
    cout << "name " << s.name << " " << s.roll; 
    return 0;
}
