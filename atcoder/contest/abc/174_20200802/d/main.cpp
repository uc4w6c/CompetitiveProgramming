#include <bits/stdc++.h>
using namespace std;

// 入れ替えは必要ないと考えて実装したパターン。ダメだった。入力例3
int main() {
    int N;
    cin >> N;
    bool c[N];
    string tmp;
    cin >> tmp;
    for (int i = 0; i < N; i++) {
        if (tmp[i] == 'R') {
            c[i] = false;  // Red
        } else {
            c[i] = true;  // White
        }
    }

    int count = 0;
    for (int i = 0; i < N - 1; i++) {
        if (c[i] == true && c[i + 1] == false) {
            cout << i << endl;
            c[i + 1] = true;
            count++;
        }
    }
    cout << count;
}
