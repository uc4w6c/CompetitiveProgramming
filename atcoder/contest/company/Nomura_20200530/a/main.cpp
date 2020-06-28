#include <bits/stdc++.h>
using namespace std;

// A - Study Scheduling
int change(int T) {
    if (T < 0) {
        return 60 + T;
    }
    return T;
}

int main() {
    int H1, M1, H2, M2, K;
    cin >> H1 >> M1 >> H2 >> M2 >> K;

    int S3, H3, M3;
    S3 = M2 - (K % 60);
    M3 = change(S3);
    if (S3 < 0) {
        H3 = H2 - (K / 60) - 1;
    } else {
        H3 = H2 - (K / 60);
    }

    /*
    cout << ceil(K / 60) << endl;
    cout << (K % 60) << endl;
    cout << H3 << endl;
    cout << M3 << endl;

    cout << ((H3 - H1) * 60) << endl;
    cout << change(M3 - M1) << endl;
    */
   int S = M3 - M1;
   int result = (H3 - H1);
   if (S < 0) {
       result--;
    }
    result *= 60;
    result += change(S);
    // cout << ((H3 - H1) * 60) + change(S);
    cout << result;
}
