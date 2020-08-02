#include <bits/stdc++.h>
using namespace std;

// E - Crested Ibis vs Monster
// これ多分違う
// TODO: 100が最大だから100 * 99 * 98のループでいけるかも
// 以下間違っている。同じ攻撃を繰り返しても良い・・・
struct Atack {
    int power;
    int magic;
    bool operator>( const Atack& right ) const {
        // powerが同じ場合はマジック消耗量が少ないものを優先
        if (power == right.power) return magic < right.magic;
        return power > right.power;
    }
};
int H, N;
vector<Atack> atacks;
long long atackSum = 0;
long long magicSum = 0;

long minMagic;
void calc(int nowNo, long long minusPower, long long minusMagic) {
    if (atackSum - minusPower < H) {
        return;
    }
    if (magicSum - minusMagic > minMagic) {
        return;
    }
    // 最大まで行った場合
    if (nowNo == N) {
        minMagic = magicSum - minusMagic;
        return;
    }

    // 攻撃する
    calc(nowNo + 1, minusPower, minusMagic);
    // 攻撃しない
    calc(nowNo + 1, minusPower + atacks[nowNo].power, minusMagic + atacks[nowNo].magic);
}

int main() {
    cin >> H >> N;
    for (int i = 0; i < N; i++) {
        Atack atack;
        cin >> atack.power;
        cin >> atack.magic;
        atacks.push_back(atack);
        atackSum += atack.power;
        magicSum += atack.magic;
    }
    sort(atacks.begin(), atacks.end(), greater<>());
    minMagic = atackSum;

    // debug
    /*for (int i = 0; i < N; i++) {
        cout << atacks[i].power << " " << atacks[i].magic << endl;
    }*/
    calc(0, 0, 0);
    cout << minMagic;
}
