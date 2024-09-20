#include <bits/stdc++.h>

using namespace std;

// Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.

class Car{
    public:
    string name;
    string model;
    string engine;
    int seats;

};


int main(int argc, char const *argv[])
{
    Car car;
    car.name = "cutie nano";
    
    car.model = "cutie cute";
    car.engine = "cutie v12 vrooooooom";
    car.seats = 10000;

    cout << "name " << car.name << endl;
    cout << "model " << car.model << endl;
    cout << "engine " << car.engine << endl;
    cout << "seats " << car.seats << endl;


    return 0;
}
