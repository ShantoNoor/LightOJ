#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, i, ax, ay, bx, by, ox, oy;
    double r, c, q, s;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        r = sqrt(((ax-ox)*(ax-ox)) + ((ay-oy)*(ay-oy)));
        c = sqrt(((ax-bx)*(ax-bx)) + ((ay-by)*(ay-by)));
        q = acos((2*r*r-c*c)/(2.0*r*r));
        s = r*q;
        printf("Case %d: %lf\n", i+1, s);
    }

    return 0;
}