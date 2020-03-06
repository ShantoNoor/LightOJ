#include <iostream>
using namespace std;

int main()
{
    int t, ax, ay, bx, by, cx, cy, dx, dy, i;
    long long area;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        dx = cx - (bx - ax);
        dy = cy - (by - ay);
        area = ax*by + bx*cy + cx*dy + dx*ay;
        area = area - (ay*bx + by*cx + cy*dx + dy*ax);
        area = area/2;
        if(area < 0)
            area = area*(-1);
        cout << "Case " << i+1 << ": " << dx << " " << dy << " " << area << endl;
    }

    return 0;
}