#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int A, B, C, P, Q, R;
    cin >> A >> B >> C >> P >> Q >> R;
    int totalEVMVotes = (P + Q + R) / 2;

    if ((A + B + C) > totalEVMVotes || (A + B + R) > totalEVMVotes || (A + Q + C) > totalEVMVotes || (P + B + C) > totalEVMVotes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
