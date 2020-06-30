#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;

	for (int tt = 0; tt < t; tt++)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int count = 0;
		int prev = arr[0];
		for (int i = 1; i < n; i++)
		{
			if(prev != arr[i])
			{
				count++;
				prev = arr[i];
			}
		}

		cout << "Case " << tt+1 << ": " << count << endl;
	}

	return 0;
}