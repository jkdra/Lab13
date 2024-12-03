//
// Created by Jawad Khadra on 12/2/24.
//

#include "sheepClass.h"

using namespace std;

// Constructor
Sheep::Sheep(const string &name, int age) : name(name), age(age) {}

// Destructor
Sheep::~Sheep() {}

// Accessors
std::string Sheep::getName() const { return name; }
int Sheep::getAge() const { return age; }

// Mutators
void Sheep::setName(const string &name) { this->name = name; }
void Sheep::setAge(int age) {
    if (age <= 9) this->age = age;
    else cerr << "Invalid age! Sheep age must be 9 or below.\n";
}

/*
 * displaySheep
 * Displays the sheep.
 */
void Sheep::displaySheep() const {
    cout << "\n\nNAME           AGE\n";
    cout << "-------------- ---\n";
    cout << left << setw(14) << name << "  " << age << "\n";
}