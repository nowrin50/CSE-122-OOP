

/* C++ program to implement inheritance with following requirements,

Classes :- Animal.cpp, bird.cpp, canine.cpp, main.cpp (to test it) :-

-You may need getters and setters also.

1. Declare and define an animal base class:

•	animal stores an age (int), a unique long ID (a boolean that is true if it is alive, and a location (a pair of double).
•	animal requires a default constructor and a 3 parameter constructor. Both constructors should set the unique ID automatically.
    They should also set the alive boolean to true.
•	The three parameter constructor should accept an int for the age and two doubles for the set of coordinates. The default should
    set these three values to 0.
•	animal requires a virtual move method which accepts two doubles that represent two coordinates, and ‘moves’ the animal to the set
    of coordinates.
•	animal requires a copy constructor and a virtual destructor. The destructor should be virtual.
•	animal requires a virtual sleep method and a virtual eat method. Both methods return void. Both methods should print an appropriate
    message to cout.
•	animal requires a setAlive function which accepts a boolean. This is a void function that changes the alive data member to the value
    of the boolean that is passed in.Overload the insertion operator for the animal. */



    #include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    int age;
    long uniqueID;
    bool alive;
    pair<double, double> location;

public:
    Animal() : age(0), uniqueID(rand()), alive(true), location(make_pair(0.0, 0.0)) {}

    Animal(int age, double x, double y) : age(age), uniqueID(rand()), alive(true), location(make_pair(x, y)) {}

    virtual void move(double x, double y) {
        location.first = x;
        location.second = y;
        cout << "Animal has moved to location: (" << location.first << ", " << location.second << ")" << endl;
    }

    Animal(const Animal& other) {
        age = other.age;
        uniqueID = other.uniqueID;
        alive = other.alive;
        location = other.location;
    }

    virtual ~Animal() {}

    virtual void sleep() {
        cout << "Animal is sleeping" << endl;
    }

    virtual void eat() {
        cout << "Animal is eating" << endl;
    }

    void setAlive(bool isAlive) {
        alive = isAlive;
    }

    friend ostream& operator<<(ostream& os, const Animal& animal) {
        os << "Animal ID: " << animal.uniqueID << endl;
        os << "Age: " << animal.age << endl;
        os << "Alive: " << (animal.alive ? "Yes" : "No") << endl;
        os << "Location: (" << animal.location.first << ", " << animal.location.second << ")" << endl;
        return os;
    }
};

class Bird : public Animal {
public:
    Bird() : Animal() {}

    Bird(int age, double x, double y) : Animal(age, x, y) {}

    virtual void move(double x, double y) override {
        location.first = x;
        location.second = y;
        cout << "Bird has flown to location: (" << location.first << ", " << location.second << ")" << endl;
    }

    virtual void sleep() override {
        cout << "Bird is sleeping" << endl;
    }

    virtual void eat() override {
        cout << "Bird is eating seeds" << endl;
    }
};

class Canine : public Animal {
public:
    Canine() : Animal() {}

    Canine(int age, double x, double y) : Animal(age, x, y) {}

    virtual void move(double x, double y) override {
        location.first = x;
        location.second = y;
        cout << "Canine has walked to location: (" << location.first << ", " << location.second << ")" << endl;
    }

    virtual void sleep() override {
        cout << "Canine is sleeping" << endl;
    }

    virtual void eat() override {
        cout << "Canine is eating meat" << endl;
    }
};

int main() {
    Animal animal1(5, 1.0, 2.0);
    Bird bird1(2, 3.0, 4.0);
    Canine canine1(3, 5.0, 6.0);

    cout << "Animal Details:" << endl << animal1 << endl;
    cout << "Bird Details:" << endl << bird1 << endl;
    cout << "Canine Details:" << endl << canine1 << endl;

    cout << "Moving the animals..." << endl;

    animal1.move(7.0, 8.0);
    bird1.move(9.0, 10.0);
    canine1.move(11.0, 12.0);

    cout << "Animal Details after move:" << endl << animal1 << endl;
    cout << "Bird Details after move:" << endl << bird1 << endl;
    cout << "Canine Details after move:" << endl << canine1 << endl;

    cout << "Making the animals sleep and eat..." << endl;

    animal1.sleep();
    animal1.eat();

    bird1.sleep();
    bird1.eat();

    canine1.sleep();
    canine1.eat();

    cout << "Setting the animals to dead..." << endl;

    animal1.setAlive(false);
    bird1.setAlive(false);
    canine1.setAlive(false);

    cout << "Animal Details after setAlive:" << endl << animal1 << endl;
    cout << "Bird Details after setAlive:" << endl << bird1 << endl;
    cout << "Canine Details after setAlive:" << endl << canine1 << endl;

return 0;
}



/* Code Output:
Animal Details:
Animal ID: 41
Age: 5
Alive: Yes
Location: (1, 2)

Bird Details:
Animal ID: 18467
Age: 2
Alive: Yes
Location: (3, 4)

Canine Details:
Animal ID: 6334
Age: 3
Alive: Yes
Location: (5, 6)

Moving the animals...
Animal has moved to location: (7, 8)
Bird has flown to location: (9, 10)
Canine has walked to location: (11, 12)
Animal Details after move:
Animal ID: 41
Age: 5
Alive: Yes
Location: (7, 8)

Bird Details after move:
Animal ID: 18467
Age: 2
Alive: Yes
Location: (9, 10)

Canine Details after move:
Animal ID: 6334
Age: 3
Alive: Yes
Location: (11, 12)

Making the animals sleep and eat...
Animal is sleeping
Animal is eating
Bird is sleeping
Bird is eating seeds
Canine is sleeping
Canine is eating meat
Setting the animals to dead...
Animal Details after setAlive:
Animal ID: 41
Age: 5
Alive: No
Location: (7, 8)

Bird Details after setAlive:
Animal ID: 18467
Age: 2
Alive: No
Location: (9, 10)

Canine Details after setAlive:
Animal ID: 6334
Age: 3
Alive: No
Location: (11, 12)


Process returned 0 (0x0)   execution time : 0.036 s
Press any key to continue. */
