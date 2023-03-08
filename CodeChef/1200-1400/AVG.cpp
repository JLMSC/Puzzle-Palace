#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N, K, V;
    cin >> N >> K >> V;
    int temp;
    int arrSum = 0;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arrSum += temp;
    }

    int res = (V * (N + K)) - arrSum;
    if (res > 0 && res % K == 0) {
        cout << res / K << endl;
    } else {
        cout << -1 << endl;
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
