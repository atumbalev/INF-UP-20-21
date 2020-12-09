#include <iostream>

const int* findFirstOf(const int* begin, const int* end, const int* sBegin, const int* sEnd)
{
	const int* cur = begin;
	const int* snd;
	while (cur < end)	
	{
		snd = sBegin;
		while (snd < sEnd)
		{
			if (*cur == *snd)
			{
				return cur;
			}
			++snd;
		}
		++cur;
	}
	return nullptr;
}

int main(int argc, char const *argv[])
{
	int arr1[]{1, 2, 3, 4, 5};
	int arr2[]{4, 7, 13};

	const int* elem = findFirstOf(arr1, arr1 + 5, arr2, arr2 + 3);
	if (elem != nullptr)
	{
		std::cout << *elem;
	}
	else
	{
		std::cout << "Element no tin array!";
	}

	return 0;
}