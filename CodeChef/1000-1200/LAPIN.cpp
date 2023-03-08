#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    string S;
    cin >> S;

    unordered_map<char, int> leftSide;
    unordered_map<char, int> rightSide;
    for (int i = 0, j = S.size() - 1; i < S.size() / 2; i++, j--) {
        leftSide[S[i]]++;
        rightSide[S[j]]++;
    }

    bool bothEq = true;
    for (int i = 0; i < S.size() / 2; i++) {
        if (leftSide[S[i]] != rightSide[S[i]]) {
            bothEq = false;
            break;
        }
    }

    cout << (bothEq ? "YES" : "NO") << endl;
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
