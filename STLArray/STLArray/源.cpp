#include<iostream>
#include<array>
using namespace std;

int main()
{
	std::array<int, 5> vals = {1, 5 , 8 , 9 ,6};
	printf("%d\n", vals.size());

	if (!vals.empty())
	{
		for (size_t i{}; i < vals.size; i++)
		{
			printf("%d  ", vals.at(i));
		}
		printf("\n");
	}

	getchar();
	return 0;
}













