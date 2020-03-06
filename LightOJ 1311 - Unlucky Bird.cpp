#include <iostream>
#include <iomanip>
//#include <stdio.h>
using namespace std;

int main()
{
    int t, i;
    double v1, v2, v3, a1, a2, s1, s2, s, d, time, t1, t2;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        s1 = (v1*v1)/(2*a1);
        s2 = (v2*v2)/(2*a2);
        s = s1 + s2;
        t1 = v1/a1;
        t2 = v2/a2;
        time = t1;
        if(time < t2)
            time = t2;
        d = v3*time;
        //cout << "Case " << i+1 << ": " << fixed << setprecision(8) << s << " " << fixed << setprecision(1) << d << endl;
        //cout << "Case " << i+1 << ": " << s << " " << d << endl;
        printf("Case %d: %lf %lf\n", i+1, s, d);
    }

    return 0;
}

/*
v1 = 0.5
v2 = 1.0
v3 = 2.0
a1 = 0.25
a2 = 0.5

*v^2 = u^2 + 2as
=> 0 = u^2 + 2as
=> s = (u^2)/(2a)

s1 = 0.5
s2 = 1
s = s1+s2 = 1.50000000 // 7 zeros

*a = (v-u)/t
=> t = v/a
=> t = 0.5/0.25 = 2

*/