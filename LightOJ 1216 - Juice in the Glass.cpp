#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

#define pi acos(-1)

int main()
{
    int t, r1, r2, h, p;
    double r3, x, vol3, vol2;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> r1 >> r2 >> h >> p;
        x = (h*r2);
        x = x/(r1-r2);
        r3 = r1-r2;
        r3 = r3*p/h;
        r3 = r3+r2;
        vol2 = pi*r2;
        vol2 = vol2*r2*x;
        vol2 = vol2/3;
        vol3 = pi*r3;
        vol3 = vol3*r3;
        vol3 = vol3*(x+p);
        vol3 = vol3/3;
        vol3 = vol3 - vol2;
        //printf("Case %d: %lf\n", i+1, vol3);
        cout << "Case " << i+1 << ": " << fixed << setprecision(6) << vol3 << endl;
    }

    return 0;
}