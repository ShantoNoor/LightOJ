#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long t, n, x, y, i, sqr, extra;
    cin >> t;

    i = 1;
    while(t--)
    {
        cin >> n;
        sqr = ceil(sqrt(n));
        extra = sqr*sqr - n;

        if(sqr > extra)
        {
            y = extra + 1;
            x = sqr;
        }
        else
        {
            y = sqr;
            x = n - (sqr-1)*(sqr-1);
        }
        if(sqr%2)
        {
            int temp = y;
            y = x;
            x = temp;
        }
        cout << "Case " << i << ": " << x << " " << y << endl;
        i++;
    }

    return 0;
}