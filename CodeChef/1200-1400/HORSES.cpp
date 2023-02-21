#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int minSkill = INT_MAX;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            minSkill = min(minSkill, abs(arr[i] - arr[j]));
        }
    }
    cout << minSkill << endl;
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