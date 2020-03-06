#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define pi acos(-1)

int main()
{
    int i, n, t;
    double R, r;

    cin >> t;
    for(i = 0; i < t; i++)
    {
        cin >> R >> n;
        /*
            ## sin(pi/n) = r/R-r
            => R*sin(pi/n) - r*sin(pi/n) = r
            => R*sin(pi/n) = r(1+sin(pi/n))
            => r = (R*sin(pi/n))/(1+sin(pi/n))
        */
       r = (R*sin(pi/n))/(1+sin(pi/n));
       cout << "Case " << i+1 << ": " << setprecision(10) << r << endl;
    }

    return 0;
}