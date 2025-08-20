// Pair.cpp
// Karina Hernandez, Harman Nagra, Alejandro Yepez
// Implement member functions here

#include <"Pair.h">

template <typename T>
Pair <T>::Pair(T f, T s) {
	f = first;
	s = second;
}

T Pair<T>::getFirst() const {
	return first;
}

T Pair<T>::getSecond() const {
	return second;
}

void Pair<T>::setFirst(T f) {
	first = f;
}

void Pair<T>::setSecond(T s) {
	second = s;
}