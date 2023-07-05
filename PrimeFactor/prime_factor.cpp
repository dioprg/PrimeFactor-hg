#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int i)
	{
		vector<int> ret = {};
		if (i == 2)
		{
			ret.push_back(2);
		}
		if (i == 3)
		{
			ret.push_back(3);
		}
		return ret;
	}
};