#include <bits/stdc++.h>
using namespace std;

// A - Lucky 7
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < 3; i++) {
        if (N % 10 == 7) {
            cout << "Yes";
            return 0;
        }
        N = N / 10;
    }
    cout << "No";
}
