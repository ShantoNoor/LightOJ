#include <iostream>
using namespace std;

int main()
{
    int t, i, x, y, result;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> x >> y;
        result = x*y;
        if(x == 1 || y == 1)
            result = x*y;
        else if(x == 2 || y == 2)
        {
            if(x < y)
            {
                x = x+y;
                y = x-y;
                x = x-y;
            }
            if(x % 4 == 1 || x % 4 == 3)
                result = x+1; 
            else if(x % 4 == 2)
                result = x+2;
            else 
                result = x;
        }
        else if(result%2)
            result = result/2 + 1;
        else
            result = result/2;
        cout << "Case " << i+1 << ": " << result << endl;
    }

    return 0;
}