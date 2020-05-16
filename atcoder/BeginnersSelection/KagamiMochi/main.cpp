#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> data(N);
    for (int i = 0; i < N; i++) {
        cin >> data.at(i);
    }
    sort(data.begin(), data.end(), greater<int>());

    int tmpSize = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (tmpSize == 0 || data.at(i) < tmpSize) {
            tmpSize = data.at(i);
            count++;
        }
    }
    cout << count;
}
