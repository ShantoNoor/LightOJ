#include <iostream>
using namespace std;

int main()
{
    int t, x1, x2, y1, y2, m, i, cx, cy;
    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> m;
        cout << "Case " << i << ":" << endl;
        while(m--)
        {
            cin >> cx >> cy;
            if((cx > x1 && cx < x2) && (cy > y1 && cy < y2))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}