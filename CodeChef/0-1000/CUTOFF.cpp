#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    int N, X;
    cin >> N >> X;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int maxMark = *max_element(arr.begin(), arr.end());
    int minMark = *min_element(arr.begin(), arr.end());

    int count = 0;
    int passingMark = maxMark;
    while (count != X) {
        count = 0;
        for (auto m : arr) {
            if (m > passingMark - 1) {
                count++;
            }
        }

        if (count > X) {
            passingMark++;
        } else {
            passingMark--;
        }
    }
    cout << passingMark << endl;
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