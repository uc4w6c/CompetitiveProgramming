#include <bits/stdc++.h>
using namespace std;

int H, W, K;
int choiseCount = 0;
vector<vector<bool>> masu;

void choise(int hPoint, int hMaxCount, int hNowCount, map<int, bool> hMap,
            int wPoint, int wMaxCount, int wNowCount, map<int, bool> wMap) {

    if (hNowCount == hMaxCount && 
        wNowCount == wMaxCount) {

        int blackCount = 0;
        for (int i = 0; i < H; i++) {
            if (hMap[i]) continue;
            for (int j = 0; j < W; j++) {
                if (wMap[j]) continue;

                if (masu[i][j]) blackCount++;
            }
        }
        if (blackCount == K) choiseCount++;
        return;
    }

    for (int i = hPoint + 1; i < H; i++) {
        for (int j = wPoint; j < W; j++) {

            hMap[i] = true;
            wMap[j] = true;
            choise(i, hMaxCount, hNowCount + 1, hMap,
                   j, wMaxCount, wNowCount + 1, wMap);
        }
    }
}

int main() {
    cin >> H >> W >> K;
    masu[H][W];

    char c;
    for (int i = 0; i < H; i++) {
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


    for (int i = 0; i < H; i++) {
        for (int j = 0; i < H; i++) {
            choise(0, i, 0, hMap, 0, j, 0, wMap);
        }
    }

    cout << choiseCount;
}
