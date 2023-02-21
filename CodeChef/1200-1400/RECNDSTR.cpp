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
        string S;
        cin >> S;
        
        string VL = S, VR = S;
        if (S.size() > 1) {
            VL.append(VL.substr(0, 1));
            VL.erase(0, 1);
            VR.insert(0, VR.substr(VR.size() - 1, 1));
            VR.erase(VR.size() - 1, VR.size() + 1);
        }

        cout << (VL == VR ? "YES" : "NO") << endl;
    }
    return 0;
}