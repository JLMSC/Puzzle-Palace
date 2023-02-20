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
        int X, Y;
        cin >> X >> Y;
        cout << (Y > X ? "YES" : "NO") << endl;
    }
    return 0;
}