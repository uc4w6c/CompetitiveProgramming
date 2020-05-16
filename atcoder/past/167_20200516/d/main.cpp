#include <bits/stdc++.h>
using namespace std;

// D - Teleporter
int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    vector<int> rated;
    int nowPoint = 1;
    for (int i = 1; i <= K; i++) {
        // cout << "nowPoint:" << nowPoint << endl;
        // cout << "A.at(nowPoint):" << A.at(nowPoint - 1) << endl;

        if (rated.empty() == false) {
            // auto itr = find(rated.begin(), rated.end(), nowPoint);
            // if (itr != rated.end()) {
                // cout << rated.at(*itr + ((K - i) % (rated.size() - i)));
            // }
        }
        rated.push_back(nowPoint);
        nowPoint = A.at(nowPoint - 1);
    }
    cout << nowPoint;
}
