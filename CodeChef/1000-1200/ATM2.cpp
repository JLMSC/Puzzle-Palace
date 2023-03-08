#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N, K;
    cin >> N >> K;
    string res = "";
    int val;
    for (int i = 0; i < N; i++) {
        cin >> val;
        if (val <= K) {
            K -= val;
            res.append("1");
        } else {
            res.append("0");
        }
    }
    cout << res << endl;
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
