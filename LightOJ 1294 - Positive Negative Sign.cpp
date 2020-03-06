#include <iostream>
using namespace std;

int main()
{
    long long t, m, n;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n >> m;
        cout << "Case " << i+1 << ": " << (n/2)*m << endl;
    }

    return 0;
}