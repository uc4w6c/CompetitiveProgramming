#include <bits/stdc++.h>
using namespace std;

// E - Crested Ibis vs Monster
// これ多分違う
// TODO: 100が最大だから100 * 99 * 98のループでいけるかも
struct Atack {
    int power;
    int magic;
    double point;
    bool operator<( const Atack& right ) const {
        return point < right.point;
    }
};
int main() {
    int H, N;
    cin >> H >> N;
    vector<Atack> atack(N);
    int A, B;
    for (int i = 0; i < N; i++) {
        cin >> atack[i].power;
        cin >> atack[i].magic;
        atack[i].point = atack[i].magic / atack[i].power;
    }
    sort(atack.begin(), atack.end());

    // debug
    /*for (int i = 0; i < N; i++) {
        cout << atack[i].power << endl;
    }*/


}
