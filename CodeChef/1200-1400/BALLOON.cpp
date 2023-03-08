#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N;
    cin >> N;
    int arr[N];
    for (auto &v : arr) {
        cin >> v;
    }

    int problemsCount = 7;
    vector<int> vibgyor = {1, 2, 3, 4, 5, 6, 7};
    for (int i = N - 1; i > 0; i--) {
        if (find(vibgyor.begin(), vibgyor.end(), arr[i]) != vibgyor.end()) {
            problemsCount = i + 1;
            break;
        }
    }
    cout << problemsCount << endl;
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
