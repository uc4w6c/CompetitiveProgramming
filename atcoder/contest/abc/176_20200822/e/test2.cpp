#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int H, W, M;
    cin >> H >> W >> M;
    map<string, int> bompMap;
    int h, w;
    cin >> h >> w;
    bompMap[to_string(h) + "," + to_string(w)] = 2;

    // cout << bompMap[h + "," + w] << endl;
    cout << bompMap["1,2"] << endl;
    cout << bompMap["2,2"] << endl;
}
