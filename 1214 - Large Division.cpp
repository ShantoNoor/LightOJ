#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;

	for (int i = 0; i < t; i++)
	{
		string a; int b;
		cin >> a >> b;
		if(b < 0) b *= -1;
		long long int res = 0;
		int l = a.size(), j = 0;
		if(a[j] == '-') j = 1;
		while(j < l) res = ((a[j++]-'0') + res*10)%b; 
		if(!res) printf("Case %d: divisible\n", i+1);
		else printf("Case %d: not divisible\n", i+1);
	}

	return 0;
}