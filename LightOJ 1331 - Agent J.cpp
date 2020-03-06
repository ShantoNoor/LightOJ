#include <iostream>
#include <math.h>
using namespace std;

#define PI acos(-1)

int main()
{
    double r1, r2, r3, a, b, c, x, y, z, s, tri_area, xa, ya, za, aa, area;
    long long i, t;
    //scanf("%lld", &t);
    cin >> t;
    for(i = 0; i < t; i++)
    {
        //scanf("%lf %lf %lf", &r1, &r2, &r3);
        cin >> r1 >> r2 >> r3;
        a = r2 + r3; //!r1
        b = r1 + r3; //!r2
        c = r1 + r2; //!r3
        x = acos((b*b+c*c-a*a)/(2.0*b*c)); //r1
        y = acos((a*a+c*c-b*b)/(2.0*a*c)); //r2
        z = acos((b*b+a*a-c*c)/(2.0*a*b)); //r3
        s = (a+b+c)/2.0;
        tri_area = sqrt(s*(s-a)*(s-b)*(s-c));
        xa = 0.5*r1*r1*x;
        ya = 0.5*r2*r2*y;
        za = 0.5*r3*r3*z;
        aa = xa + ya + za;
        area = tri_area - aa;
        printf("Case %lld: %0.10lf\n", i+1, area);
    }

    return 0;
}