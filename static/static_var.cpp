#include <iostream>

void count()
{
	static int count = 0;
	std::cout << "count = " << ++count << std::endl;
}

int main()
{
	for(size_t i=0; i<5; i++)
	{
		count();
	}
	return 0;
}
