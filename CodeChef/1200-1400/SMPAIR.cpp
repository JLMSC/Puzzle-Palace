#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N;
    cin >> N;
    int arr[N];
    int minInArr = INT_MAX, pos = -1;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] < minInArr) {
            minInArr = arr[i];
            pos = i;
        }
    }

    int minVal = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (i != pos) {
            minVal = min(minVal, (minInArr + arr[i]));
        }
    }

    cout << minVal << endl;
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