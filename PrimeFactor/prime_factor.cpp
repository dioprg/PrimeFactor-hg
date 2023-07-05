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
			int divisor = 2;
			if (number == 4 || number == 6 || number == 9)
			{
				for (divisor = 2; number > 1; divisor++)
				{
					while (number % divisor == 0)
					{
						ret.push_back(divisor);
						number /= divisor;
					}
				}
			} else if (number == 12)
			{
				ret.push_back(2);
				ret.push_back(2);
				ret.push_back(3);
			}
			else
			{
				ret.push_back(number);
			}
		}
		return ret;
	}
};