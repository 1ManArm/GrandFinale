#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
/*#infdef _FUNCTIONS_H_
#define _FUNCTIONS_H_


#endif*/


//Выделение памяти под двумерный динамический массив
template <typename T>
void mx_memory(T**& pointer, int rows, int cols) {
	pointer = new int* [rows];
	for (int i = 0; i < rows; i++)
		pointer[i] = new int[cols] {};
}
//Освобождение памяти, выделенной под двумерный динамический массив
template <typename T>
void clear_mx_memory(T**& pointer, int rows) {
	for (int i = 0; i < rows; i++)
		delete[] pointer[i];
	delete[] pointer;
	pointer = nullptr;
}
//Возврат местоположения массива, состоящего из положительных элементов, переданных массивов
template <typename T>
T* positive_memory(T arr1[], const int size1, T arr2[], const int size2, int& var) {
	T* tmp = new T[size1 + size2];
	var = 0;

	for (int i = 0; i < size1; i++)
		if (arr1[i] > 0)
			tmp[var++] = arr1[i];

	for (int i = 0; i < size2; i++)
		if (arr2[i] > 0)
			tmp[var++] = arr2[i];
	
	T* result = new T[var];
	for (int i = 0; i < var; i++)
		result[i] = tmp[i];

	delete[] tmp;
	return result;
}
//Запись текстового названия числа в файл
bool number_name(int num, std::string file_path);