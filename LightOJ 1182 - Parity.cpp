#include <iostream>
using namespace std;

int main()
{
    int t, i, n, vs, count;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> n;
        count = 0;
        while(n)
        {
            vs = n%2;
            n = n/2;
            if(vs)
                count++;
        }
        if(count%2)
            cout << "Case " << i+1 << ": odd" << endl;
        else
            cout << "Case " << i+1 << ": even" << endl;
    }

    return 0;
}