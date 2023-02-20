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
        int val;
        vector<int> arr;
        for (int i = 0; i < N; i++)
        {
            cin >> val;
            arr.push_back(val);
        }

        int count = 0;
        for (int i = 1; i < N + 1; i++) {
            if (arr[i - 1] == i + count) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}