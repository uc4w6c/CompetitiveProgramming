#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    priority_queue<long long> que;
    long long A;
    for (int i = 0; i < N; i++) {
        cin >> A;
        que.push(A);
    }

    long long tmpA;
    for (int i = 0; i < M; i++) {
        tmpA = que.top();
        que.pop();
        tmpA /= 2;
        que.push(tmpA);
    }

    long long sum = 0;
    while (!que.empty()) {
        sum += que.top();
        que.pop();
    }
    cout << sum;
}
