#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num)
{
	if (num <= 1)
		return false;
	if (num == 2)
		return true;
	if (num % 2 == 0)
		return false;

	int root = sqrt(num);
	for (int i = 3; i <= root; i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	long long int sum = 2;
	int lim = 2000000;

	for (int i = 3; i < lim; i += 2)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}

	printf("%lld\n", sum);
	return 0;
}
