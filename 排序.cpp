#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{
	int N;
	std::cin >>N;
	std::vector<int> num_list;
	int num;
	for (int i = 0;i < N; ++i)
	{
		std::cin >> num;
		num_list.push_back(num);
	}
	std::sort(num_list.begin(),num_list.end());
    for (int i = 0; i < num_list.size();++i)
	{
		std::cout << num_list[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
