#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[4];
    cin >> A[0] >> A[1] >> A[2] >> A[3];
    cout << min(min(min(A[0], A[1]), A[2]), A[3]);
}
