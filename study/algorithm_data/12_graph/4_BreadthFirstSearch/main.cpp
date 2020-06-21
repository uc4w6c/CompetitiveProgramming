#include <bits/stdc++.h>
using namespace std;

// これはBFSではないかも！
struct Result {
    int no;
    int minRouteCount;
    vector<int> nodes;
};
Result resultes[100];

void search(int currentNo, int routeCount) {
    resultes[currentNo].minRouteCount = min(resultes[currentNo].minRouteCount, routeCount);

    for (int value : resultes[currentNo].nodes) {
        search(value - 1, routeCount + 1);
    }
}

int main() {
    int N;
    cin >> N;

    int U, K, V;
    for (int i = 0; i < N; i++) {
        cin >> U >> K;
        vector<int> values(K);
        for (int j = 0; j < K; j++) {
            cin >> V;
            values[j] = V;
        }
        resultes[i].no = U;
        resultes[i].minRouteCount = 100;
        resultes[i].nodes = values;
    }

    search(0, 0);

    for (int i = 0; i < N; i++) {
        cout << resultes[i].no << " ";
        cout << resultes[i].minRouteCount << endl;
    }

}
