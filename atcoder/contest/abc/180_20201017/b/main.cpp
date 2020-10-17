#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    long long x[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    long long sum = 0;
    long long u = 0;
    long long maxNum = x[0];
    for (int i = 0; i < N; i++) {
        long long tmp = pow(x[i], i + 1);
        sum += tmp;
        u += tmp * tmp;
        maxNum = max(tmp, maxNum);
    }
    cout << sum << endl;
    cout << sqrt(u) << endl;
    cout << maxNum << endl;
}
