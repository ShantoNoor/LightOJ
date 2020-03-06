#include <iostream>
using namespace std;

#define io 10 //getting in lift + getting out lift = 5 + 5 = 10sec
#define doc 9 //lift's door total open and close time = open + close + open = 3 + 3 + 3 = 9sec

int main()
{
    int t, mp, lp, i, time; //mp = my position & lp lift position
    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> mp >> lp;
        if(mp <= lp)
        {
            time = lp*4;
        }
        else
        {
            time = mp*4 + (mp-lp)*4;
        }
        time = time + io + doc;
        cout << "Case " << i+1 << ": " << time << endl;
    }

    return 0;
}