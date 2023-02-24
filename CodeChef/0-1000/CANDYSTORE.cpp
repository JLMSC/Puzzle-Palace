#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int X, Y;
    cin >> X >> Y;
    int rupees;
    if (Y > X) {
        rupees = X + ((Y - X) * 2);
    } else {
        rupees = Y;
    }
    cout << rupees << endl;
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