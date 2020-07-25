#include <bits/stdc++.h>
using namespace std;

// D - Dice in Line
int main() {
    int N, K;
    cin >> N >> K;
    vector<double> p(N);
    int tmpP;
    for (int i = 0; i < N; i++) {
        cin >> tmpP;
        p[i] = ((tmpP + 1.0) / 2.0);
    }

    sort(p.begin(), p.end(), greater<double>());

    double sum;
    for (int i = 0; i < K; i++) {
        // cout << p[i] << endl;
        sum += p[i];
    }
    cout << sum;
}
