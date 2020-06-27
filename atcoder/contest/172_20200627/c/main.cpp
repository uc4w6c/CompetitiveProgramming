#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N, M;
    long long K;
    cin >> N >> M >> K;
    int aNo = 0, bNo = 0;
    bool aEnd = false, bEnd = false;
    long long A[N], B[M];
    long long a, b;
    long long readCount = 0;
    while (true) {
        if (aNo == N) aEnd = true;
        if (bNo == M) bEnd = true;
        if(aEnd && bEnd) break;
        if (!aEnd && A[aNo] >= K && !bEnd && B[bNo] >= K) break;
        if (aEnd && B[bNo] >= K) break;
        if (bEnd && A[aNo] >= K) break;



    }
    cout << readCount;
}
