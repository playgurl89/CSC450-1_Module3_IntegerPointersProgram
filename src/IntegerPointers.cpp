/*
 * IntegerPointers.cpp
 *
 *  Created on: Nov 4, 2026
 *      Author: samanthawidell
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare three integer variables
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    // Request three integer values from the user
    cout << "Enter the first integer: ";
    cin >> firstNumber;

    cout << "Enter the second integer: ";
    cin >> secondNumber;

    cout << "Enter the third integer: ";
    cin >> thirdNumber;

    // Dynamically allocate memory for each integer pointer
    int* firstPointer = new int(firstNumber);
    int* secondPointer = new int(secondNumber);
    int* thirdPointer = new int(thirdNumber);

    // Display the original integer variables
    cout << "\n========== ORIGINAL VARIABLES ==========" << endl;
    cout << "First Number:  " << firstNumber << endl;
    cout << "Second Number: " << secondNumber << endl;
    cout << "Third Number:  " << thirdNumber << endl;

    // Display pointer addresses and dereferenced values
    cout << "\n========== INTEGER POINTERS ==========" << endl;

    cout << "First Pointer Address:  " << firstPointer << endl;
    cout << "First Pointer Value:    " << *firstPointer << endl;

    cout << "\nSecond Pointer Address: " << secondPointer << endl;
    cout << "Second Pointer Value:   " << *secondPointer << endl;

    cout << "\nThird Pointer Address:  " << thirdPointer << endl;
    cout << "Third Pointer Value:    " << *thirdPointer << endl;

    // Release dynamically allocated memory
    delete firstPointer;
    delete secondPointer;
    delete thirdPointer;

    // Reset pointers to prevent accidental reuse
    firstPointer = nullptr;
    secondPointer = nullptr;
    thirdPointer = nullptr;

    cout << "\nMemory successfully released." << endl;

    return 0;
}




