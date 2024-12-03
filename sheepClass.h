//
// Created by Jawad Khadra on 12/2/24.
//

#ifndef SHEEPCLASS_H
#define SHEEPCLASS_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Sheep {
private:
    string name;
    int age;

public:
    // Constructor
    Sheep(const string &name = "", int age = 0);

    // Destructor
    ~Sheep();

    // Accessors
    string getName() const;
    int getAge() const;

    // Mutators
    void setName(const string &name);
    void setAge(int age);

    /*
     * displaySheep
     * Displays the sheep.
     */
    void displaySheep() const;
};

#endif //SHEEPCLASS_H
