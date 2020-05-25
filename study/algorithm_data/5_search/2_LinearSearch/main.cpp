#include <bits/stdc++.h>
using namespace std;

// Linear Search - 線形探索

int main() {
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++) cin >> S.at(i);
    int q;
    cin >> q;
    vector<int> T(q);
    for (int i = 0; i < q; i++) cin >> T.at(i);

    int count = 0;
    for (int i = 0; i < q; i ++) {
        for (int j = 0; j < N; j++) {
            if (T.at(i) == S.at(j)) {
                count++;
                break;
            }
        }
    }

    cout << count << "\n";
}
