#include <iostream>
using namespace std;

int main()
{
    int t, n, i, number;
    int sum;
    cin >> t;

    for(i = 0; i < t; i++)
    {
        sum = 0;
        cin >> n;
        while (n--)
        {
            cin >> number;
            if(number > 0)
                sum = sum + number;
        }
        cout << "Case " << i+1 << ": " << sum << endl;
    }

    return 0;
}