#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;

	for (int i = 0; i < t; i++)
	{
		string n;
		cin >> n;
		int k = 0, j = n.size() - 1;

		while(k < j)
		{
			if(n[k] != n[j])
			{
				break;
			}
			k++; j--;
		}

		cout << "Case " << i+1 << ": ";
		if(k == j || k > j) cout << "Yes" << endl; 
		else cout << "No" << endl;
	}

	return 0;
}