#include <bits/stdc++.h>
using namespace std;

struct Process {
    string name;
    int time;
};

// Queue キュー
int main() {
    int N, Q;
    cin >> N >> Q;
    queue<Process> que;

    for (int i = 0; i < N; i++) {
        string name;
        int time;
        cin >> name >> time;
        que.push({ name, time });
    }

    int time = 0;
    while (!que.empty()) {
        auto process = que.front();
        que.pop();

        if (process.time <= Q) {
            time += process.time;
            cout << process.name << " " << time << endl;
        } else {
            time += Q;
            que.push({ process.name, process.time - Q });
        }
    }
}
