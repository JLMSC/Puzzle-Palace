#include <iostream>
#include <bit>
#include <bitset>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

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
        int N;
        cin >> N;
        string bin;
        cin >> bin;
        unordered_map<char, int> freq;
        for (auto b : bin) {
            freq[b]++;
        }

        if (N % 2 == 0) {
            if (freq['0'] % 2 == 0 && freq['1'] % 2 == 0 || freq['0'] == freq['1']) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}