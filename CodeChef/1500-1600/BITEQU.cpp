#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

void solve() {
    long long N;
    cin >> N;

    switch (N)
    {
    case 0:
        cout << "3 1 6 7" << endl;
        break;
    
    case 1:
        cout << "1 4 3 2" << endl;
        break;
    
    case 2:
        cout << "2 4 3 1" << endl;
        break;
    
    case 3:
        cout << "8 3 2 1" << endl;
        break;

    default:
        cout << "1 2 3 " << (N ^ 3) << endl;
        break;
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