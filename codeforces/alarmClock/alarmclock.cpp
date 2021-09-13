#include <iostream>
#include <cmath>
#define llint long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("_input.txt", "r", stdin);
    freopen("_output.txt", "w", stdout);
#endif

    int t, a, b, c, d;
    //a time to refresh
    //b time 1st alarm goes off
    //c time succeding alarm goes off
    //d time to fall asleep

    cin >> t;
    for (int e = 0; e < t; e++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a < b)
        {
            cout << b << endl;
        }
        else if (c < d)
        {
            cout << "-1" << endl;
        }
        else
        {
            llint spend = b;
            llint lft = a - b;
            llint rep = c - d;
            llint sl;

            sl = (lft + rep - 1) / rep;
            spend += sl * c;
            cout << spend << endl;
        }

        return 0;
    }