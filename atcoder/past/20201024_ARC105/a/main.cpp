#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long A[4];
    cin >> A[0] >> A[1] >> A[2] >> A[3];

    long long eated = 0;
    long long notEat = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    eated = 0;
                    notEat = 0;
                    if (i == 0) notEat += A[0];
                    else eated += A[0];
                    if (j == 0) notEat += A[1];
                    else eated += A[1];
                    if (k == 0) notEat += A[2];
                    else eated += A[2];
                    if (l == 0) notEat += A[3];
                    else eated += A[3];

                    // cout << eated << ":" << notEat << endl; // debug
                    if (eated == notEat) {
                        cout << "Yes";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No";
}
