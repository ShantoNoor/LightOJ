#include <stdio.h>
#include <cmath>

using namespace std;

double arr[1000001];

int main()
{
	long long n;
	int t, b; 

	arr[0] = 0;
	
	for (int i = 1; i < 1000001; i++)
	{
		arr[i] = arr[i-1] + log(i);
	}

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%lld %d", &n, &b);

		n = arr[n] / log(b) + 1;

		printf("Case %d: %lld\n", i+1, n);
	}

	return 0;
}