#include <iostream>
using namespace std;

int devide_count(int n)
{
    int r = (n/3)*2;
    if(n%3 == 2)
        r++;
    return r;
}

int main()
{
    long long i, t, m, n;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> m >> n;
        cout << "Case " << i+1 << ": " << devide_count(n) - devide_count(m-1) << endl;
    }

    return 0;
}