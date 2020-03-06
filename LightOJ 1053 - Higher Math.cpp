#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, t, i;
    long long ab, aa, bb, cc;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if(c > a && c > b)
        {
            aa = a*a;
            bb = b*b;
            cc = c*c;
        }
        else if(b > a && b > c)
        {
            aa = a*a;
            cc = b*b;
            bb = c*c;
        }
        else if(a > b && a > c)
        {
            cc = a*a;
            bb = b*b;
            aa = c*c;
        }
        ab = aa+bb;
        if(ab == cc)
            cout << "Case " << i+1 << ": " << "yes" << endl;
        else
            cout << "Case " << i+1 << ": " << "no" << endl;
    }

    return 0;
}