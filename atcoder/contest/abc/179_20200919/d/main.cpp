#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N, K;
    cin >> N >> K;
    int L, R;
    set<int> moves;
    for (int i = 0; i < K; i++) {
        cout << L << R;
        moves.insert(L);
        moves.insert(R);
    }

    long long modA = 998244353;
    // 以下を降順にして大きい方からパターンを累積和的なやつで計算すればいけるかもなぁ
    for (int i = 0; i < moves.size(); i++) {

    }
}
