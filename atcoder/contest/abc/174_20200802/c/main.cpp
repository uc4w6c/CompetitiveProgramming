#include <bits/stdc++.h>
using namespace std;

// 
// とりあえずやってみる
int main() {
    int K;
    cin >> K;
    if (K % 2 == 0) {
        cout << -1;
        return 0;
    }

    // 最後が7になるまで
    long long countS = 0;
    int lastNo = K % 10;
    int plusNo = 0;
    int tmp;
    while (true) {
        cout << "lastNo:" << lastNo << ", plusNo:" << plusNo << endl;
        for (int i = 0; i <= 9; i++) {
            if (((plusNo % 10) + (lastNo * i)) % 10 == 7) {
                cout << "(K * i) : " << (K * i) << endl;  // debug
                plusNo = (plusNo + (K * i)) / 10;
                cout << "plusNo:" << plusNo << endl;  // debug
                countS++;
                if (plusNo == 0) {
                    cout << countS;
                    return 0;
                }
                break;
            }
        }
        if (plusNo == 7) break;
        // lastNo = plusNo % 10;
    }
    cout << ++countS;
}
// 41 1897 = 77777
