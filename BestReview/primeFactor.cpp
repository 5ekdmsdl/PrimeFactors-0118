#include <string>
#include <vector>

class PrimeFactor
{
public:
	std::vector<int> of(int number)
	{
		std::vector<int> results = {};
		if (number <= 1) return results;

		while(number > 1)
		{
			for (int divisor = 2; divisor <= number; divisor++)
			{
				if (number % divisor == 0)
				{
					results.push_back(divisor);
					number = number / divisor;
					break;
				}
			}
		}
		
		return results;
	}
};
