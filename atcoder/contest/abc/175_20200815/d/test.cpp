#include <bits/stdc++.h>
using namespace std;

// 
struct masu {
    int nextP;
    int score;
};

int main() {
    vector<int> N(3);
    N[0] = 3;
    N[1] = 2;
    N[2] = 4;
    sort(N.begin(), N.end());

    for (int i = 0; i < 3; i++) {
        cout << N[i] << endl;
    }
}
