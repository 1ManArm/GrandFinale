#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include "Functions.h"

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b ]\n";
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Задача 1. Выделение памяти под двумерный массив
	/*std::cout << "Задача 1.\nВведите количество рядов -> ";
	std::cin >> n;
	std::cout << "Введите количество столбцов -> ";
	std::cin >> m;
	int** mx;
	mx_memory(mx, n, m);
	
	std::cout << "Сгенерированный массив:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			std::cout << mx[i][j] << '\t';
		std::cout << '\n';
	}

	clear_mx_memory(mx, n);
	std::cout << std::endl;*/

	//Задача 2. Объединение массивов
	/*std::cout << "Задача 2.\nМассив 1:\n";
	const int sizea = 5;
	int arr21[sizea];
	fill_arr(arr21, sizea, -10, 15);
	print_arr(arr21, sizea);

	std::cout << "Массив 2:\n";
	const int sizeb = 8;
	int arr22[sizeb];
	fill_arr(arr22, sizeb, -18, 18);
	print_arr(arr22, sizeb);

	std::cout << "Итоговый массив:\n";
	int sizec;
	int* arr23 = positive_memory(arr21, sizea, arr22, sizeb, sizec);
	print_arr(arr23, sizec);
	delete[] arr23;
	std::cout << std::endl;*/

	//Задача 3. Число из файла в строке
	std::cout << "Задача 3.\nВведите двузначное число -> ";
	std::cin >> n;
	if (number_name(n, "number.txt"))
		std::cout << "Число записано в файл.\n\n";
	else
		std::cout << "Ошибка выполнения функции.\n\n";

	return 0;
}