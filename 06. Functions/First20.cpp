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

// Alternitive way to count number of zeroes and ones
bool equalBits(int n) {
    unsigned int zeros = 0;
    unsigned int ones = 0;
    
    while (n != 0) {
        if (n % 2 == 1) {
            ones++;
        } else {
            zeros++;
        }
        
        n /= 2;
    }
    return zeros == ones;
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

