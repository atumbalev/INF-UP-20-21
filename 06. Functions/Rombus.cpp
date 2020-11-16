#include <iostream>

/*
Да се напише програма, която въвежда цяло положително число *n* и печата ромбче от звездички с размер n. \
Пример: \
Вход:   1 \
Изход: `*` 

Вход: 3 \
Изход: 
```
  * 
 * * 
* * *
 * * 
  *  
*/

void printRobus(int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			std::cout << ' ';
		}
		for (int j = 0; j < i; ++j)
		{
			std::cout << '*' << ' ';
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			std::cout << ' ';
		}
		for (int j = 0; j < n - i; ++j)
		{
			std::cout << '*' << ' ';
		}
		std::cout << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	printRobus(3);
	return 0;
}