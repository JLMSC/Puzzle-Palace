#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N, X;
    cin >> N >> X;
    string S;
    int calc = 1;
    for (int i = 0; i < N; i++) {
        if (calc < X) {
            S += '+';
            calc++;
        } else if (calc > X) {
            S += '-';
            calc--;
        } else {
            S += '*';
        }
    }
    cout << (S.size() == N && calc == X ? S : "-1") << endl;
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