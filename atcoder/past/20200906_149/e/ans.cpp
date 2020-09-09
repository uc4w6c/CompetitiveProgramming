#include <bits/stdc++.h>
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
 
// 插入此處
 
LL a[100005];
LL prefix[100005];
 
int main() {
    LL n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, [](LL x, LL y) { return x > y; });
    prefix[0] = a[0];
    cout << 0 << ":" << prefix[0] << endl; // debug
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
        cout << i << ":" << prefix[i] << endl; // debug
    }
    LL l = 0, r = 2e5 + 5;
    LL num;
    LL ans = 0;
    while (r - l > 1) {
        LL mid = (l + r) / 2;
        LL up = n - 1;
        LL count = 0;
        LL sum = 0;
        for (LL i = 0; i < n; i++) {
            while (0 <= up && !(a[i] + a[up] >= mid)) { up--; }
            if (0 > up) { break; }
            count += up + 1;
            sum += prefix[up] + (up + 1) * a[i];
        }
        // printf("mid = %lld, count = %lld, sum = %lld\n", mid, count, sum);
        if (count >= m) {
            num = count;
            ans = sum;
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << ans - (num - m) * l << endl;
}
