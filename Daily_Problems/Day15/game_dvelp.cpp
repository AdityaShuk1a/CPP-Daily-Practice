#include <bits/stdc++.h>

using namespace std;

// Base class Animal
class Animal {
protected:
    string species;
    int age;
    float weight;

public:
    Animal(string sp, int a, float w) : species(sp), age(a), weight(w) {}

    void displayInfo() {
        cout << "Species: " << species << "\nAge: " << age << " years\nWeight: " << weight << " kg" << endl;
    }
};


class Mammal : public Animal {
protected:
    string furColor;

public:
    Mammal(string sp, int a, float w, string fur) : Animal(sp, a, w), furColor(fur) {}

    void makeSound() {
        cout << species << " makes a sound!" << endl;
    }
};


class Bird : public Animal {
protected:
    float wingSpan;

public:
    Bird(string sp, int a, float w, float ws) : Animal(sp, a, w), wingSpan(ws) {}

    void fly() {
        cout << species << " is flying with a wingspan of " << wingSpan << " meters." << endl;
    }
};


class Reptile : public Animal {
protected:
    bool isVenomous;

public:
    Reptile(string sp, int a, float w, bool venom) : Animal(sp, a, w), isVenomous(venom) {}

    void crawl() {
        cout << species << " is crawling." << endl;
    }
};


class Lion : public Mammal {
private:
    int prideSize;

public:
    Lion(string sp, int a, float w, string fur, int pride) 
        : Mammal(sp, a, w, fur), prideSize(pride) {}

    void hunt() {
        cout << species << " hunts with its pride of " << prideSize << " members." << endl;
    }
};


class Elephant : public Mammal {
private:
    float trunkLength;

public:
    Elephant(string sp, int a, float w, string fur, float trunk)
        : Mammal(sp, a, w, fur), trunkLength(trunk) {}

    void useTrunk() {
        cout << species << " uses its trunk to drink water." << endl;
    }
};

// Multiple inheritance: FlyingReptile from Bird and Reptile
class FlyingReptile : public Bird, public Reptile {
public:
    FlyingReptile(string sp, int a, float w, float ws, bool venom)
        : Animal(sp, a, w), Bird(sp, a, w, ws), Reptile(sp, a, w, venom) {}

    void glide() {
        cout << "Flying reptile is gliding with a wingspan of " << wingSpan << " meters." << endl;
    }
};

int main() {
    // Test Lion Object
    Lion lion("Lion", 5, 190, "Golden", 6);
    lion.displayInfo();
    lion.makeSound();
    lion.hunt();

    

    // Test Parrot Object
    Bird parrot("Parrot", 2, 1.5, 0.8);
    parrot.displayInfo();
    parrot.fly();

    

    // Test Crocodile Object
    Reptile crocodile("Crocodile", 12, 400, false);
    crocodile.displayInfo();
    crocodile.crawl();

    

    // Test Elephant Object
    Elephant elephant("Elephant", 10, 5000, "Grey", 2);
    elephant.displayInfo();
    elephant.makeSound();
    elephant.useTrunk();

    

    // Test Flying Reptile Object
    FlyingReptile pterodactyl("Pterodactyl", 3, 50, 3.0, true);
    pterodactyl.displayInfo();
    pterodactyl.fly();
    pterodactyl.crawl();
    pterodactyl.glide();

    return 0;
}
