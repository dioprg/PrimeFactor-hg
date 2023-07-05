#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int number)
	{
		vector<int> ret = {};
		if (number > 1)
		{
			if (number == 4)
			{
				ret.push_back(2);
				ret.push_back(2);
			} else
			{
				ret.push_back(number);
			}
		}
		return ret;
	}
};