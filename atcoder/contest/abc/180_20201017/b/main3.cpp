#include <bits/stdc++.h>
using namespace std;

long double sqrt1(double a) {
    long double left = 0.0;
    long double right = a;
    long double mid = 0.0;
    for(int i = 0; i < 1000; i++) {
        mid = (left + right) / 2;
        if(mid * mid - a < 0) left = mid;
        else right = mid;
    }
    return right;
}
long double sqrt2(double a) {
    long double b = a;
    for(int i = 0; i < 100000; i++) {
        b = (b * b + a) / (2 * b);
    }
    return b;
}
double sqrt3(double a) {
    double b = a;
    for(int i = 0; i < 10; i++) {
        b = (b * b + a) / (2 * b);
    }
    return b;
}

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
    double sqrtX = sqrt3(u);
    string sqrtS = to_string(sqrtX);
    cout << sum << endl;
    cout << sqrtS << endl;
    cout << maxNum << endl;
}
