
#ifndef BUBBLE_H
#define BUBBLE_H

#include "header.h"
#include <vector>

//Sergio Augusto Macias Corona
//A01352038

// =================================================================
// Performs the bubble sort algorithm on an array
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// =================================================================
template <class T>
int bubbleSort(T *arr, int size) {
	int count = 0; //Variable para contar el número de interacciones
	for(int i = size - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				count++;
				swap(arr, j, j + 1);
			}
		}
	}
	return count;
}

// =================================================================
// Performs the bubble sort algorithm on an vector.
//
// @param v, a vector of T elements.
// =================================================================
template <class T>
int bubbleSort(std::vector<T> &v) {
	int count = 0; //Variable para contar el número de interacciones
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j] > v[j + 1]){
				count++;
				swap(v, j, j + 1);
			}
		}
	}
	return count;
}

#endif /* BUBBLE_H */
