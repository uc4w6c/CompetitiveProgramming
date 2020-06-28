#include <bits/stdc++.h>
using namespace std;

// 回答見た
int main() {
    long long N;
    string S = "";
    cin >> N;
    long long num = 26;
    long long now = 26;
    while(N > 0){
        N--;
        long long d = N % 26;
        N /= 26;
        S += 'a' + d;
    }
    reverse(S.begin(),S.end());
    cout << S << endl;
}
