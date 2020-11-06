#include <bits/stdc++.h>
using namespace std;

int N;
int point[8][2];
double totalDistance = 0;
int totalCount = 0;

void calc(int now, vector<bool> routed, int beforePoint, int routedCount, double sumDistance) {
    if (routedCount > 1) {
        // cout << point[beforePoint][0] << ":" << point[beforePoint][1] << ", ";  // debug
        // cout << point[now][0] << ":" << point[now][1] << endl;  // debug
        sumDistance += sqrt(
                         pow(point[beforePoint][0] - point[now][0], 2) + 
                         pow(point[beforePoint][1] - point[now][1], 2)
                       );
    }
    if (routedCount == N) {
        totalDistance += sumDistance;
        totalCount++;
        // cout << "end:" << sumDistance << endl; // debug
        return;
    }
    for (int i = 0; i < N; i++) {
        if (routed[i]) continue;
        routed[i] = true;
        calc(i, routed, now, routedCount + 1, sumDistance);
        routed[i] = false;
    }
};

int main() {

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> point[i][0];
        cin >> point[i][1];
    }

    vector<bool> routed(N, false);
    for (int i = 0; i < N; i++) {
        routed[i] = true;
        calc(i, routed, 0, 1, 0);
        routed[i] = false;
    }
    printf("%.8f", totalDistance / totalCount);
}
