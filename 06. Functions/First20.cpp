#include <iostream>

bool hasEqualNumberOfZeroesAndOnes(unsigned int n)
{
	size_t onesCount = 0;
	size_t zeroesCount = 0;

	while (n)
	{
		if (n & 1)
		{
			++onesCount;
		}
		else
		{
			++zeroesCount;
		}

		n >>= 1;
	}

	return onesCount == zeroesCount;
}

void printFirstTwenty()
{
	int count = 0;
	int candidate = 1;
	while (count < 20)
	{
		if (hasEqualNumberOfZeroesAndOnes(candidate))
		{
			++count;
			std::cout << candidate << std::endl;
		}
		++candidate;
	}
}

int main(int argc, char const *argv[])
{
	printFirstTwenty();
	return 0;
}

