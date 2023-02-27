#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    
    int cCount = 0;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for (auto c : S) {
        if (cCount >= 4) {
            break;
        }
        if (find(vowels.begin(), vowels.end(), c) != vowels.end()) {
            cCount = 0;
        } else {
            cCount++;
        }
    }
    cout << (cCount < 4 ? "YES" : "NO") << endl;
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
