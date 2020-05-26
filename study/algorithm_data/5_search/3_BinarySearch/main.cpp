#include <bits/stdc++.h>
using namespace std;

// Binary Search - 二分探索

int S[1000000];
int N;
int binarySearch(int key) {
    int left = 0;
    int right = N;
    int mid;
    while (left < right) {
        mid = (left + right) / 2;
        if (key == S[mid]) return 1;
        if (key > S[mid]) left = mid + 1;
        else if (key < S[mid]) right = mid;
    }
    return 0;
}

int main() {
    cin >> N;
    // vector<int> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    int q;
    cin >> q;
    vector<int> T(q);
    for (int i = 0; i < q; i++) cin >> T.at(i);

    int count = 0;
    for (int i = 0; i < q; i ++) {
        count += binarySearch(T.at(i));
    }

    cout << count << "\n";
}
