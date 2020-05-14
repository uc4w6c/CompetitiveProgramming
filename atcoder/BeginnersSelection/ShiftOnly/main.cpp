#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A;
    // 無駄なロジックだけどC++に慣れるためにあえて入れている
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    int halfCount = 0;
    int isEnd = false;
    while (true) {
        for (int i = 0; i < N; i++) {
            if (A.at(i) == 0) {
                isEnd = true;
            }
            if ((A.at(i) % 2) == 1) {
                isEnd = true;
            }
            A.at(i) = (A.at(i) / 2);
        }
        if (isEnd) {
            break;
        }
        halfCount++;
    }
    cout << halfCount;
}
