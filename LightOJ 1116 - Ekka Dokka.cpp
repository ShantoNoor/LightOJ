#include <iostream>
using namespace std;

int main()
{
    long long l, t, i;
    long long w, n, j;
    bool in;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> w;
        in = false;
        if(w%2 == 0)
        {
            l = w/2;
            for(j = 2; j <= l; j *= 2)
            {
                if(w%j == 0)
                {
                    n = w/j;
                    if(n%2 == 1)
                    {
                        in = true;
                        break;
                    }
                }
            }
        }
        if(in)
            cout << "Case " << i+1 << ": " << n << " " << j << endl;
        else
            cout << "Case " << i+1 << ": " << "Impossible" << endl;
    }

    return 0;
}