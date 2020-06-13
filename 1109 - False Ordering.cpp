#include <stdio.h>
using namespace std;


int NOD(int x)
{
	int count = 2;
	for (int i = 2; i < x; i++)
		if(x % i == 0)
			count++;
	return count;
}

int main()
{
	int lis[1001]; 
	lis[0] = 0; lis[1] = 1;
	int arr[1001]; 
	arr[0] = 0; arr[1] = 1;

	int max = -1;

	for (int i = 2; i < 1001; i++)
	{
		lis[i] = NOD(i);
		if(lis[i] > max) max = lis[i];
	}

	for(int i = 2, k = 2; i < max+1; i++)
	{
		for(int j = 1000; j > 0; j--)
		{
			if(lis[j] == i)
			{
				arr[k] = j;
				k++;
			} 
		}
	}

	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);

		printf("Case %d: %d\n", i+1, arr[n]);
	}

	return 0;
}