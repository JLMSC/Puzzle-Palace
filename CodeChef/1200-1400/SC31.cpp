#include <iostream>
#include <bit>
#include <bitset>
#include <vector>

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
        vector<bitset<32>> arr;
        string binVal;
        for (int i = 0; i < N; i++)
        {
            cin >> binVal;
            arr.push_back(bitset<32>(binVal));
        }

        bitset<32> ans = arr[0];
        for (int i = 0; i < N - 1; i++)
        {
            ans ^= arr[i + 1];
        }

        int count = 0;
        for (auto b : ans.to_string()) {
            if (b == '1') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}