#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long x[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    long long sum = 0;
    long double u = 0;
    long long maxNum = x[0];
    for (int i = 0; i < N; i++) {
        long long tmp = abs(x[i]);
        sum += tmp;
        u += tmp * tmp;
        maxNum = max(tmp, maxNum);
    }
    double sqrtX = sqrt(u);
    cout << sum << endl;
    printf("%.20f\n", 10, sqrtX);
    cout << maxNum << endl;
}
