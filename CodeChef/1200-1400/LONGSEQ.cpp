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
        string D;
        cin >> D;
        unordered_map<char, int> freq;
        for (auto b : D) {
            freq[b]++;
        }

        if (freq['0'] == 1 || freq['1'] == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }
    return 0;
}