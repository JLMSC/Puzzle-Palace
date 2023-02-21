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
    
    int mealCount = 0;
    string meal = "codechef";
    unordered_map<char, int> freq;
    while (N--) {    
        string S;
        cin >> S;
        for (auto s : S) {
            freq[s]++;
        }
    }

    int i = 0;
    int mealSize = meal.size() - 1;
    while (freq[meal[i]] > 0) {
        freq[meal[i]]--;
        if (i == mealSize) {
            mealCount++;
            i = 0;
        } else {
            i++;
        }
    }

    cout << mealCount << endl;
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