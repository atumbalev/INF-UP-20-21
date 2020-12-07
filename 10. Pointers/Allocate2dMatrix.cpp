#include <iostream>

// Да се напише програма, която прочита 2 цели числа m и n и заделя двумерен масив с размери m на n. 
// След това прочита m.n на брой цели цисла с които запълва така получената матрица. 
// Да се отпечата транспонираната матрица на дадената. След приключване на работа с матрицата, да се освободи динамично заделената памет.

int** allocateMemory(int m, int n)
{
	int** matrix = new int*[m];

	for (int i = 0; i < m; ++i)
	{
		matrix[i] = new int[n];
	}

	return matrix;
}

void readMatrix(int** matrix, int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void printTranspose(int** matrix, int m, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << matrix[j][i] << ' ';
		}
		std::cout << std::endl;
	}
}

void freeMatrix(int** matrix, int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		delete [] matrix[i];
	}

	delete [] matrix;
}

int main(int argc, char const *argv[])
{
	int m, n;
	std::cin >> m >> n;
	int** matrix = allocateMemory(m, n);
	readMatrix(matrix, m, n);
	printTranspose(matrix, m, n);
	freeMatrix(matrix, m, n);
	return 0;
}