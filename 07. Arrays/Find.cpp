#include <iostream>

const size_t MAX_SIZE = 100;

// size_t = unsigned
int find(int arr[], int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int index = find(arr, 6, 3);
	std::cout << index << std::endl;
	return 0;
}