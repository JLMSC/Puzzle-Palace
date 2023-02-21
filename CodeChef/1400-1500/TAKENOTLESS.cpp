#include <iostream>
#include <bit>
#include <bitset>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

void solve()
{
    int N;
    cin >> N;
    int val;
    vector<int> arr;
    unordered_map<int, int> freq;
    for (int i = 0; i < N; i++)
    {
        cin >> val;
        arr.push_back(val);
        freq[val]++;
    }

    sort(arr.begin(), arr.end());
    bool Mwon = false;
    for (int i = N - 1; i >= 0; i--) {
        if (freq[arr[i]] % 2 != 0) {
            cout << "Marichka" << endl;
            Mwon = true;
            break;
        }
    }
    if (!Mwon) {
        cout << "Zenyk" << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}