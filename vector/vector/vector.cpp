#include<vector>

void VectorPart()
{
	using Group = std::vector<int>;
	Group a;
	Group b = a;
	Group c({1,4,5,68,9,8});
	Group d(c);
	Group e(d.begin(), d.end());
	a.insert(a.begin(), 10);

	

}









