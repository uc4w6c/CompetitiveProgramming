#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ok = A * 2 + 100;
    cout << max(ok - B, 0);
}
