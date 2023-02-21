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
        int X, Y;
        cin >> X >> Y;
        if (X == Y) {
            cout << "ANY" << endl;
        } else if (min(X, Y) == X) {
            cout << "FIRST" << endl;
        } else {
            cout << "SECOND" << endl;
        }
    }
    return 0;
}