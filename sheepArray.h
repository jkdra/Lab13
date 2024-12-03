//
// Created by Jawad Khadra on 12/2/24.
//

#ifndef SHEEPARRAY_H
#define SHEEPARRAY_H


#include "sheepClass.h"
#include <iostream>

const int MAX_SHEEP = 100; // Define a fixed maximum size

class SheepArray {
private:
    Sheep sheepList[MAX_SHEEP];  // DATA - Sheep Array
    int currentSize = 0;                // DATA - Size of the array

public:

    /*
     * addSheep
     * Adds a sheep to the list.
     */
    void addSheep(const Sheep &sheep);

    /*
     * outputFirstSheep
     * Outputs the first sheep in the list.
     */
    void outputFirstSheep() const;

    /*
     * findSheep
     * Finds a sheep in the list.
     */
    void findSheep() const;

    /*
     * listSize
     * Outputs the size of the list.
     */
    void listSize() const;

    /*
     * outputList
     * Outputs the list.
     */
    void outputList() const;

    /*
     * clearList
     * Clears the list.
     */
    void clearList();
};

#endif //SHEEPARRAY_H
