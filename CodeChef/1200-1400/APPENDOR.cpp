#include <iostream>

using namespace std;

void solution() {
    int Tc;
    int N, Y;
    int *arr;
    cin >> Tc;
    for (int i = 0; i < Tc; i++) {
        cin >> N >> Y;
        arr = new int[N];
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }

        int bitwise;
        int ans = arr[0];
        for (int k = 1; k < N; k++) {
            ans = (ans | arr[k]);
        }

        bool validAnswer = false;
        for (int k = 0; k <= Y; k++) {
            if ((ans | k) == Y) {
                ans = k;
                validAnswer = true;
                break;
            }
        }
        cout << (validAnswer ? ans : -1) << endl;
    }
}

int main() {
    solution();
    return 0;
}