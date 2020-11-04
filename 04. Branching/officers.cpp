#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
	int m1, m2, n1, n2;

	std::cin >> m1 >> m2 >> n1 >> n2;

	// m - rows
	// n - columns
	// - - - - - - - -
	// - - - - - - - -
	// - - - x - v - -
	// - - - - - - - -
	// - - - c - y - -
	// - - - - - - - -
	// - - - - - - - -

	// x (m1, n1)
	// y (m2, n2)
	// c (m2, n1)
	// v (m1, n2)

	int CYlength = abs(n2 - n1);
	int CXlength = abs(m2 - m1);

	if (CYlength == CXlength)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}