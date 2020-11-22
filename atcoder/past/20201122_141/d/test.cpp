#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<long long> que;
    que.push(1);
    que.push(3);
    que.push(2);
    cout << que.top();
    que.pop();
    que.push(4);
    cout << que.top();
    que.pop();
}
