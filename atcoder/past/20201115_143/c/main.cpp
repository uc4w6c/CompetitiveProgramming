#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int sum = 0;
    char beforeColor = S[0];
    for (int i = 1; i < N; i++) {
        if (beforeColor == S[i]) {
            sum++;
        } else {
            beforeColor = S[i];
        }
    }
    cout << (N - sum);
}
