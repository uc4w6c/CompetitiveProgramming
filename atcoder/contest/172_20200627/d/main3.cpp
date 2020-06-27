#include <bits/stdc++.h>
using namespace std;

// エラトステネスの篩
vector<pair<long long, long long> > res;

vector<pair<long long, long long> > prime_factorize(long long N) {
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long N;
    cin >> N;
    const auto &pf = prime_factorize(N);
    long long res = 1;
    for (auto p : pf) res *= p.second + 1;
    cout << res << endl;
}
