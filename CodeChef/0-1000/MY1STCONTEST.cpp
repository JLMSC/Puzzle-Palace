#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N, A, B;
    cin >> N >> A >> B;
    cout << (N - A) << " " << (N - A) - B << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    solve();
//    int tc;
//    cin >> tc;
//    for (int t = 1; t <= tc; t++) {
//        // cout << "Case #" << t << ":";
//        solve();
//    }
    return 0;
}
