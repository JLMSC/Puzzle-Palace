#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int X, Y, A;
    cin >> X >> Y >> A;
    cout << (X <= A && A < Y ? "YES" : "NO") << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ":";
        solve();
    }
    return 0;
}