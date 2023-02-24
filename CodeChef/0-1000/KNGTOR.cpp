#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N, M;
    cin >> N >> M;
    cout << ((N * 5) + (M * 7)) << endl;
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
