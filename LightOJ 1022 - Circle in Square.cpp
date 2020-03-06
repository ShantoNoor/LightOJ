#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define pi (2 * acos (0.0)) 

int main()
{
    double r, cArea, sArea, oArea;

    int t, i;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> r;
        cArea = pi*r*r;
        sArea = r*r*4;
        oArea = sArea - cArea;
        cout << "Case " << i+1 << ": " << fixed << setprecision(2) << oArea << endl;
    }

    return 0;
}