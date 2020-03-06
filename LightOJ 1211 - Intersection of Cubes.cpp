#include <iostream>
using namespace std;

int big(int a, int b)
{
    if(a >= b)
        return a;
    else
        return b;
}

int small(int a, int b)
{
    if(a <= b)
        return a;
    else
        return b;
}

int main()
{
    int t, i, n, bx, by, bz, sx, sy, sz, x1, y1, z1, x2, y2, z2;
    long long area;
    bool in;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> n;
        in = false;
        while(n--)
        {
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
                area = 1;
                if(!in)
                {
                    in = true;
                    bx = x1, by = y1, bz = z1;
                    sx = x2, sy = y2, sz = z2;
                }
                else
                {
                    bx = big(bx, x1);
                    by = big(by, y1);
                    bz = big(bz, z1);
                    sx = small(sx, x2);
                    sy = small(sy, y2);
                    sz = small(sz, z2);
                }
        }
        if(bx < sx && by < sy && bz < sz)
        {
            area = (sx-bx)*(sy-by)*(sz-bz);
            cout << "Case " << i+1 << ": " << area << endl;
        }
        else
        {
            cout << "Case " << i+1 << ": 0"  << endl;
        }
        
    }

    return 0;
}