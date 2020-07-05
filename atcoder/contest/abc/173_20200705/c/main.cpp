#include <bits/stdc++.h>
using namespace std;

int H, W, K;
int choiseCount = 0;
vector<vector<bool>> masu;

void choise(int hPoint, int hMaxCount, int hNowCount, map<int, bool> hMap,
            int wPoint, int wMaxCount, int wNowCount, map<int, bool> wMap) {

    // cout << "choise:" << hNowCount << endl;  // debug
    // cout << "hPoint:" << hPoint << ", wPoint:" << wPoint << endl;  // debug
    if (hNowCount == hMaxCount && 
        wNowCount == wMaxCount) {

        // debug
        cout << "i:";
        for (int i = 0; i < H; i++) {
            if (hMap[i]) cout << i << ",";
        }
        cout << endl;
        cout << "j:";
        for (int j = 0; j < H; j++) {
            if (wMap[j]) cout << j << ",";
        }
        cout << endl;

        int blackCount = 0;
        for (int i = 0; i < H; i++) {
            if (hMap[i]) continue;
            for (int j = 0; j < W; j++) {
                if (wMap[j]) continue;

                if (masu[i][j]) blackCount++;
            }
        }
        // cout << blackCount << endl;  // debug
        if (blackCount == K) choiseCount++;
        return;
    }

    /*
    for (int i = hPoint; i <= H; i++) {
        if (i != 0) hMap[i] = true;
        if (wPoint != 0) wMap[wPoint] = true;

        choise(i + 1, hMaxCount, hNowCount + 1, hMap,
               wPoint, wMaxCount, wNowCount, wMap);

        if (i != 0) hMap[i] = false;
        if (wPoint != 0) hMap[wPoint] = false;
    }
    for (int j = wPoint; j <= W; j++) {

        if (hPoint != 0) hMap[hPoint] = true;
        if (j != 0) wMap[j] = true;

        choise(hPoint, hMaxCount, hNowCount, hMap,
               j + 1, wMaxCount, wNowCount + 1, wMap);

        if (hPoint != 0) hMap[hPoint] = false;
        if (j != 0) hMap[j] = false;
    }
    */

    for (int i = hPoint; i <= H; i++) {
        for (int j = wPoint; j <= W; j++) {
            if (i == 0 && j == 0) continue;

            if (i != 0) hMap[i - 1] = true;
            if (j != 0) wMap[j - 1] = true;

            if (i != 0 && j != 0) {
                choise(i + 1, hMaxCount, hNowCount + 1, hMap,
                       j + 1, wMaxCount, wNowCount + 1, wMap); 
            }
            if (i == 0) {
                choise(i, hMaxCount, hNowCount, hMap,
                       j + 1, wMaxCount, wNowCount + 1, wMap); 
            }
            if (j == 0) {
                choise(i + 1, hMaxCount, hNowCount + 1, hMap,
                       j, wMaxCount, wNowCount, wMap); 
            }

            if (i != 0) hMap[i - 1] = false;
            if (j != 0) hMap[j - 1] = false;
        }
    }
}

int main() {
    cin >> H >> W >> K;
    masu.resize(H);

    char c;
    for (int i = 0; i < H; i++) {
        masu[i].resize(H);
        for (int j = 0; j < W; j++) {
            cin >> c;
            if (c == '.') {
                masu[i][j] = false;
            } else {
                masu[i][j] = true;
            }
        }
    }

    map<int, bool> hMap;
    map<int, bool> wMap;
    for (int i = 0; i < H; i++) hMap[i] = false;
    for (int i = 0; i < W; i++) wMap[i] = false;

    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++) {
            cout << "h Max: " << i << ", w Max:" << j << endl;  // debug
            choise(0, i, 0, hMap, 0, j, 0, wMap);
        }
    }

    cout << choiseCount;
}
