#include <iostream>
#include <bit>
#include <bitset>
#include <vector>

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
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if ((10 * X) > Y) {
            cout << (Y * Z) << endl;
        } else {
            cout << (10 * X) * Z << endl;
        }
    }
    return 0;
}