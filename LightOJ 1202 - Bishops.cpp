#include <iostream>
using namespace std;

int difference(int x, int y)
{
    if(x > y)
        return x-y;
    else
        return y-x;
    
}

int main()
{
    int t, x1, y1, x2, y2, i;
    bool in;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        in = false;
        if((x1%2 == y1%2 && x2%2 == y2%2) || (x1%2 != y1%2 && x2%2 != y2%2))
        {
            in = true;
            if(difference(x1, x2) == difference(y1, y2))
                cout << "Case " << i+1 << ": " << 1 << endl;
            else
                cout << "Case " << i+1 << ": " << 2 << endl;
        }
        if(!in)
            cout << "Case " << i+1 << ": impossible" << endl;
    }

    return 0;
}