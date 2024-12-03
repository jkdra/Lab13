

#include "sheepArray.h"


/*
 * addSheep
 * Adds a sheep to the list.
 */
void SheepArray::addSheep(const Sheep &sheep) {
    if (currentSize < MAX_SHEEP) {
        sheepList[currentSize++] = sheep; // Add sheep and increment size

        cout
        << "\nThe sheep..."
        << "\nSheep Name: " << sheep.getName()
        << "\nSheep Age: " << sheep.getAge()
        << "\nHas been added!\n";
    } else cout << "Error: Sheep list is full!\n";
}

/*
 * outputFirstSheep
 * Outputs the first sheep in the list.
 */
void SheepArray::outputFirstSheep() const {
    if (currentSize > 0) {
        sheepList[0].displaySheep();
        cout << "\nIs at the front of the list.\n";
    } else cout << "Nobody is in front - the list is empty!\n";
}

/*
 * findSheep
 * Finds a sheep in the list.
 */
void SheepArray::findSheep() const {

    string name;  // INPUT - Sheep Name

    if (currentSize == 0) {
        cout << "There are no sheep to be found!\n";
        return;
    }

    // Just in case there are prior numerical inputs
    cin.ignore();

    // Ask for name
    cout << "Who are you looking for? ";
    getline(cin, name);

    for (int i = 0; i < currentSize; ++i) {
        if (sheepList[i].getName() == name) {
            sheepList[i].displaySheep();
            cout << "\n\nHas been found.\n";
            return;
        } else cout << "Sheep not found!\n";
    }
}

/*
 * listSize
 * Outputs the size of the list.
 */
void SheepArray::listSize() const {
    if (currentSize == 0) cout << "The list is empty!\n";
    else cout << "\nThere are " << currentSize << " sheep in the list!\n";
}

/*
 * outputList
 * Outputs the list.
 */
void SheepArray::outputList() const {
    if (currentSize == 0) {
        cout << "The list is empty!\n";
        return;
    }

    cout << "\n\nNAME           AGE\n";
    cout << "-------------- ---\n";
    for (int i = 0; i < currentSize; ++i) cout << left << setw(14) << sheepList[i].getName() << "  " << sheepList[i].getAge() << "\n";
    listSize();
}

/*
 * clearList
 * Clears the list.
 */
void SheepArray::clearList() {

    if (currentSize == 0) {
        cout << "The list is empty!\n";
        return;
    }

    currentSize = 0; // Reset size to 0; elements are "cleared"
    cout << "The list has been cleared!\n";
}