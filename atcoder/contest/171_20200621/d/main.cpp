#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    map<int, int> A;
    int a;
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> a;
        sum += a;
        A[a]++;
    }
    // cout << sum << endl;

    cin >> Q;
    long long B, C;
    for (int i = 0; i < Q; i++) {
        cin >> B >> C;
        sum -= A[B] * B;
        sum += A[B] * C;
        A[C] += A[B];
        A[B] = 0;
        cout << sum << endl;
    }

}
