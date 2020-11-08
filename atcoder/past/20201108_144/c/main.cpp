#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long ans = N - 1;
    for (long long i = 1; i < sqrt(N) + 1; i++) {
        if (N % i == 0) {
            ans = min((i - 1) + ((N / i) - 1), ans);
        }
    }
    cout << ans;
}
