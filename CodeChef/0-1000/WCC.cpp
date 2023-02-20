#include <iostream>
#include <bit>
#include <bitset>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--)
    {
        int X;
        cin >> X;
        string matchResult;
        cin >> matchResult;

        int a = 0;
        int b = 0;

        for (auto r : matchResult) {
            if (r == 'C') {
                a += 2;
            } else if (r == 'N') {
                b += 2;
            } else {
                a++;
                b++;
            }
        }

        if (a > b) {
            cout << 60 * X << endl;
        } else if (a == b) {
            cout << 55 * X << endl;
        } else {
            cout << 40 * X << endl;
        }
    }
    return 0;
}