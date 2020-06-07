#include <bits/stdc++.h>
using namespace std;

// C - Replacing Integer
// 考え方は以下だが遅いからもっと効率化する必要がある
// main2で実装検討する
int main() {
    long long N, K;
    cin >> N >> K;
    long long minN = N;
    set<long long> setN;
    setN.insert(N);
    long long beforeSetCount = 1;
    while (true) {
        N = abs(K - N);
        setN.insert(N);
        if (beforeSetCount == setN.size()) {
            break;
        }
        beforeSetCount++;
        minN = min(minN, N);
    }
    cout << minN;
}

