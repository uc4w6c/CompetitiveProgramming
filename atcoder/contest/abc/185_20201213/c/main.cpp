#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;
    cin >> L;
    long long ans = 1;
    for (int i = 13; i <= L; i++) {
        ans = ans * ans * (i - 12);
        cout << i << ":" << ans << endl;
    }
    cout << ans;
}
