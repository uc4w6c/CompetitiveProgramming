#include <bits/stdc++.h>
using namespace std;

struct Result {
    int no;
    int startNo;
    int endNo;
    vector<int> nodes;
};
Result resultes[100];
int findCount = 0;
// vector<vector<int>> nodes(100);

void search(int currentNo) {
    if (resultes[currentNo].startNo == 0) {
        findCount++;
        resultes[currentNo].startNo = findCount;
    }

    for (int value : resultes[currentNo].nodes) {
        search(value - 1);
    }
    if (resultes[currentNo].endNo == 0) {
        findCount++;
        resultes[currentNo].endNo = findCount;
    }
}

int main() {
    int N;
    cin >> N;
    // vector<vector<int>> nodes(N);

    int U, K, V;
    for (int i = 0; i < N; i++) {
        cin >> U >> K;
        vector<int> values(K);
        for (int j = 0; j < K; j++) {
            cin >> V;
            values[j] = V;
        }
        resultes[i].no = U;
        resultes[i].startNo = 0;
        resultes[i].endNo = 0;
        resultes[i].nodes = values;
    }

    search(0);

    for (int i = 0; i < N; i++) {
        cout << resultes[i].no << " ";
        cout << resultes[i].startNo << " ";
        cout << resultes[i].endNo << endl;
    }

    // debug
    /*
    for (int i = 0; i < N; i++) {
        for (int value : resultes[i].nodes) {
            cout << value << " ";
        }
        cout << endl;
    }
    */
}
