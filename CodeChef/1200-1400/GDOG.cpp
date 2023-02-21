#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N, K;
    cin >> N >> K;

    int coins = 0;
    for (int i = 1; i <= K; i++) {
        coins = max(coins, N % i);
    }

    cout << coins << endl;
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