#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;

	for(int k = 0; k < t; k++)
	{
		int n, p, q;
		cin >> n >> p >> q;
		int dim[n] = {0};
		for (int i = 0; i < n; i++)
			cin >> dim[i];
		for (int i = 1; i < n; i++)
			dim[i] += dim[i-1];

		if(n < p) p = n;

		while(p > 0 && dim[p-1] > q) p -= 1;

		cout << "Case " << k+1 << ": " << p << endl;

	}	

	return 0;
}