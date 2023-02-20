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
        int p;
        cin >> p;
        cout << (p >= 80 ? "YES" : "NO") << endl;
    }
    return 0;
}