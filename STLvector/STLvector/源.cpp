#include<iostream>
#include<vector>

using namespace std;

int main()
{
	unsigned int i;
	vector<int> first;
	vector<int> second(4, 100);
	vector<int> thrid{1,2,3,4,5,6,10,7,8,9};
	vector<int> forth(second.begin(), second.end());
	vector<int> fifth(thrid);

	for ( i = 0; i < fifth.size(); i++)
	{
		cout << "   " << fifth[i];
	}
	cout << endl;
	
	cout << forth.front() << "   " << thrid.back() << endl;
	cout << forth.at(1) << "   " << thrid.back() << endl;

	for (auto it = thrid.begin(); it < thrid.end(); it++)
	{
		cout << "  " << *it;
	}
	cout << endl;

	fifth.insert(fifth.begin(), 2, 55);
	for (i = 0; i < fifth.size(); i++)
	{
		cout << "   " << fifth[i];
	}
	cout << endl;

	fifth.pop_back();

	for (i = 0; i < fifth.size(); i++)
	{
		cout << "   " << fifth[i];
	}
	cout << endl;


	getchar();
	return 0;
}

















