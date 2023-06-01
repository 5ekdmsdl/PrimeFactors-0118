#include <string>
#include <vector>

class PrimeFactor
{
public:
	std::vector<int> of(int t)
	{
		std::vector<int> pri = {};
		if (t <= 1) return pri;

		while(t > 1)
		{
			for (int n = 2; n <= t; n++)
			{
				if (t % n == 0)
				{
					pri.push_back(n);
					t = t / n;
					break;
				}
			}
		}

		
		return pri;
	}
};
