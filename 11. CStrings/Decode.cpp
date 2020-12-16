#include <iostream>

void decode(char* buffer, const char* string)
{
	unsigned times = 0;
	int bufferI = 0;
	for (int i = 0; string[i] != '\0'; ++i)
	{
		times = 0;
		while (string[i] >= '0' && string[i] <= '9')
		{
			times = times * 10 + (string[i] - '0');
			++i;
		}

		if (times == 0)
		{
			buffer[bufferI] = string[i];
			++bufferI;
		}
		else
		{
			for (unsigned j = 0; j < times; ++j)
			{
				buffer[bufferI] = string[i];
				++bufferI;	
			}
		}
	}
	buffer[bufferI] = '\0';
}

int main(int argc, char const *argv[])
{
	char buffer[100];
	decode(buffer, "a7g");
	std::cout << buffer;
	return 0;
}