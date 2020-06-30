#include <iostream>
using namespace std;

void swap(int &p, int &q)
{
	int temp = p;
	p = q;
	q = temp;
}

int main()
{
	int t; cin >> t;
	int arr[100] = {0};

	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;
		for (int j = 0; j < n; j++)
			cin >> arr[j];

		while(m--)
		{
			char ch; cin >> ch;

			if(ch == 'S')
			{
				int d; cin >> d;
				for (int j = 0; j < n; j++)
					arr[j] += d;
			}
			else if(ch == 'M')
			{
				int d; cin >> d;
				for (int j = 0; j < n; j++)
					arr[j] *= d;
			}
			else if(ch == 'D')
			{
				int d; cin >> d;
				for (int j = 0; j < n; j++)
					arr[j] /= d;
			}
			else if(ch == 'P')
			{
				int d, e; cin >> d >> e;
				swap(arr[d], arr[e]);
			}
			else if(ch == 'R')
			{
				int k = 0, j = n-1;
				while(k < j)
				{
					swap(arr[k], arr[j]);
					k++; j--;
				}
			}

		}

		cout << "Case " << i+1 << ":"<< endl;

		for (int j = 0; j < n; j++)
		{
			if(j != 0)
				cout << " ";
			cout << arr[j];
		}
		cout << endl;
	}

	return 0;
}