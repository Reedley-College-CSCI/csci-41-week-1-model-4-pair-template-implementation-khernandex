// Karina Hernandez, Harman Nagra, Alejandro Yepez

#include "Pair.h"
#include "Pair.cpp"
#include <iostream>
using namespace std;

int main() {
    // Add test cases here
     // Testing the int instance
    Pair<int> intPair(1, 2);

    // Testing the string instance
    Pair<string> stringPair("apple", "banana");

    // Output Results
    cout << "The int pair is: " << intPair.getFirst() << " and " << intPair.getSecond() << endl;
    cout << "The string pair is: " << stringPair.getFirst() << " and " << stringPair.getSecond() << endl;

    return 0;
}
