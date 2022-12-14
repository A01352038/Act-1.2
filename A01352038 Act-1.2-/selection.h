
#ifndef SELECTION_H
#define SELECTION_H

#include "header.h"
#include <vector>
//Sergio Augusto Macias Corona
//A01352038

// =================================================================
// Performs the selection sort algorithm on an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// =================================================================
template <class T>
int selectionSort(T *arr, int size) {
	int pos;
	int count = 0; //Variable para contar el número de interacciones
	for(int i = size - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(arr[j] > arr[pos]){
				pos = j;
			}
		}
		if (pos != i){
			count++;
			swap(arr, i, pos);
		}
	}
	return count;
}

// =================================================================
// Performs the selection sort algorithm on a vector.
//
// @param A, a vector of T elements.
// =================================================================
template <class T>
int selectionSort(std::vector<T> &v) {
	int pos;
	int count = 0; //Variable para contar el número de interacciones
	for(int i = v.size() - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(v[j] > v[pos]){
				pos = j;
			}
		}
		if (pos != i){
			count++;
			swap(v, i, pos);
		}
	}
	return count;
}

#endif /* SELECTION_H */
