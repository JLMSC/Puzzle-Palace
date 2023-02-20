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
        int A, B, C, X;
        cin >> A >> B >> C >> X;
        vector<int> arr = {A, B, C};
        bool canBuy = false;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (i != j) {
                    if (arr[i] + arr[j] >= X) {
                        canBuy = true;
                        break;
                    }
                }   
            }
        }
        cout << (canBuy ? "YES" : "NO") << endl;
    }
    return 0;
}