/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * LAB #13 - Arrays & Linked Lists of Sheep
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : December 2, 2024
 */

#include "mainHeader.h"
#include "sheepClass.h"
#include "sheepArray.h"
#include <iostream>

int main() {
    SheepArray sheepList;  // DATA - Sheep Array
    int menuOption = -1;   // INPUT - Menu Option

    while (menuOption != 0) {
        displayMenu();
        cin >> menuOption;

        switch (menuOption) {
            case 1: {
                string name;  // INPUT - Sheep Name
                int age;      // INPUT - Sheep Age

                // Just in case there are prior numerical inputs
                cin.ignore();
                // Ask for name
                cout << "\nSheep Name: ";
                getline(cin, name);

                // And then age
                cout << "Sheep Age: ";
                cin >> age;
                cin.ignore();

                Sheep sheep(name, age);
                sheepList.addSheep(sheep);
                break;
            }
            case 2:
                sheepList.outputFirstSheep();
                break;
            case 3: {
                sheepList.findSheep();
                break;
            }
            case 4:
                sheepList.listSize();
                break;
            case 5:
                sheepList.outputList();
                break;
            case 6:
                sheepList.clearList();
                break;
            case 0:
                cout << "Exiting Sheep List Manager. Goodbye!\n";
                break;
            default:
                cout << "The number" << menuOption << " is an invalid entry.\n";
                cout << "Invalid entry. Please enter a number between 0 and 6.\n";
        }
    }

    return 0;
}