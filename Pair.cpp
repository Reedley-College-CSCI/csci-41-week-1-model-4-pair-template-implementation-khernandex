// Pair.cpp
// Karina Hernandez, Harman Nagra, Alejandro Yepez
// Implement member functions here
//Function Definitions

#include "Pair.h"

template <typename T>			// Class template where both first
Pair <T>::Pair(T f, T s) {		// and second members are set
	first = f;
	second = s;
}

template <typename T>			// Accesor functions
T Pair<T>::getFirst() const {
	return first;
}

template <typename T>
T Pair<T>::getSecond() const {
	return second;
}

template <typename T>			// Setter functions
void Pair<T>::setFirst(T f) {
	first = f;
}

template <typename T>
void Pair<T>::setSecond(T s) {
	second = s;
}