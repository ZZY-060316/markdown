#include <iostream>

int countWays(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n < 0)
	{
		return 0;
	}
	return countWays(n - 1)+countWays(n - 2);
}
int main()
{
	int n;
	std::cin >> n;
	int ways = countWays(n);
	std::cout << ways <<std::endl;
	return 0;
}
