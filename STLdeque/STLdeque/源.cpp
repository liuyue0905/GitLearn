#include<iostream>
#include<deque>

using namespace std;


int main()
{
	unsigned int i;

	deque<int> first;
	deque<int> second(4, 100);
	deque<int> thrid{1,2,3,4,5,6,7,8,9};
	deque<int> fifth(second);

	deque<int> sixth(thrid.begin() +1, thrid.end());

	for (i = 0; i < sixth.size(); i++)
	{
		cout << "  " << sixth[i];
	}


	getchar();
	return 0;
}

