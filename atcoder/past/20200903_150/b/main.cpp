#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    int ans = 0;
    for (int i = 0; i < N - 2; i++) {
        if (S.substr(i, 3) == "ABC") ans++;
    }
    cout << ans;
}
