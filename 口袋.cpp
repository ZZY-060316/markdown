#include <iostream>
using namespace std;

bool isPrime(int num)
{
	if (num <= 1) return false;
	if (num <= 3) return true;
	if (num % 2 == 0 || num % 3 ==0)
	return false;
	for (int i = 5; i*i <= num;i += 6)
	{
		if(num % i ==0 || num % (i + 2) == 0) return false;
	}
	return true;
}
int main()
{
	int L;
	cin >> L;
	int sum = 0;
	int count = 0;
	for (int i = 2; sum <=L; i++)
	{
		if(isPrime(i)){
			sum +=i;
			if (sum <= L)
			{
				cout <<i << endl;
				count++;
			}
		}
	}
	cout << count <<endl;
	return 0; 
}
