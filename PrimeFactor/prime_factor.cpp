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
			for (int divisor = 2; number > 1; divisor++)
			{
				while (number % divisor == 0)
				{
					ret.push_back(divisor);
					number /= divisor;
				}
			}
			
		}
		return ret;
	}
};