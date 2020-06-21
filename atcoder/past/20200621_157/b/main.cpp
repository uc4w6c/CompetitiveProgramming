#include <bits/stdc++.h>
using namespace std;

// B - Bingo
struct Bingo {
    int no;
    bool match;
};
Bingo bingoes[3][3];

int main() {
    int A;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A;
            bingoes[i][j].no = A;
            bingoes[i][j].match = false;
        }
    }

    int N, B;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> B;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (B == bingoes[i][j].no) {
                    bingoes[i][j].match = true;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (bingoes[i][0].match && 
            bingoes[i][1].match &&
            bingoes[i][2].match) {
                cout << "Yes";
                return 0;
        }
        if (bingoes[0][i].match && 
            bingoes[1][i].match &&
            bingoes[2][i].match) {
                cout << "Yes";
                return 0;
        }
    }

    if (bingoes[0][0].match && 
        bingoes[1][1].match &&
        bingoes[2][2].match) {
            cout << "Yes";
            return 0;
    }

    if (bingoes[2][0].match && 
        bingoes[1][1].match &&
        bingoes[0][2].match) {
            cout << "Yes";
            return 0;
    }

    cout << "No";
}
