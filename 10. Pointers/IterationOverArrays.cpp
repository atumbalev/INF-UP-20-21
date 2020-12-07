#include <iostream>

// Да се изведат елементите на масив по три начина:

// 1. с индексирана променлива
void printWithIndexing(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
// 2. с указател - името на масива
void printWithPointerToStart(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i) << ' ';
	}
	std::cout << std::endl;
}

// 3. с указател - помощна променлива
void printWithPointer(int arr[], int size)
{
	int* cur = arr;
	for (int i = 0; i < size; ++i)
	{
		std::cout << *cur << ' ';
		++cur;
	}
	std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
	int arr[]{1, 2, 3, 4, 5};
	printWithIndexing(arr, 5);
	printWithPointerToStart(arr, 5);
	printWithPointer(arr, 5);
	return 0;
}