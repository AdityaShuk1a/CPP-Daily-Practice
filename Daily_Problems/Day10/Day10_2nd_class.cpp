#include<bits/stdc++.h>
using namespace std;

class onlyhub{
    public:
        int id;
        string name;
        int fans;
};

class student{
    public:
        string name;
        int roll;
        int age;
};
int main (){
    onlyhub p1;
    p1.id = 100;
    p1.name = "Dani Didi";
    p1.fans = INT_MAX;

    student s1;
    student s2;
    student s3;
    s1.name = "pewpew";
    s1.roll = 69;
    s1.age = 68;
    
    s2.name = "pewpewpew";
    s2.roll = 60;
    s2.age = 78;
    
    s3.name = "lalala";
    s3.roll = 10;
    s3.age = 21;
    cout << "Name s1: " << s1.name << endl;   
    cout << "roll s1: " << s1.roll << endl;   
    cout << "age s1: " << s1.age << endl;

    cout << "Name s2: " << s2.name << endl;   
    cout << "roll s2: " << s2.roll << endl;   
    cout << "age  s2 " << s2.age << endl;

    cout << "Name s3: " << s3.name << endl;   
    cout << "roll s3: " << s3.roll << endl;   
    cout << "age  s3 " << s3.age << endl;   

}