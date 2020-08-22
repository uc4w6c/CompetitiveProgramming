#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int H, W, M;
    cin >> H >> W >> M;
    map<int, int> hCountMap, wCountMap;
    map<string, int> bompMap;

    int hMaxCount = 0;
    int hMaxNo;
    int wMaxCount = 0;
    int wMaxNo;

    int h, w;
    for (int i = 0; i < M; i++) {
        cin >> h >> w;

        bompMap[to_string(h) + "," + to_string(w)] = 1;
        hCountMap[h]++;
        wCountMap[w]++;

        if (hCountMap[h] > hMaxCount) {
            hMaxCount++;
            hMaxNo = h;
        }

        if (wCountMap[h] > wMaxCount) {
            wMaxCount++;
            wMaxNo = w;
        }
    }

    
    int maxBomp;
    maxBomp = hMaxCount + wMaxCount;
    // これだとだめなケースがある(別の箇所で最大値を出せる時)
    if (bompMap[to_string(hMaxNo) + "," + to_string(wMaxNo)] == 1) {
        maxBomp--;
    }
    cout << maxBomp;
}
