#include <bits/stdc++.h>
using namespace std;

struct Way {
    int from;
    int to;
    bool operator<(const Way& right) const {
        return from == right.from ? from < right.from : from < right.from;
    }
};
struct Room {
    int minCount;
    int rote;
};

// 失敗したから修正したもの
vector<Room> calc(vector<Way> ways, vector<Room>& rooms, int lastRoom, int nowRoom, int nowPoint) {
    cout << "nowPoint:" << nowPoint << endl;
    cout << "nowRoom:" << nowRoom << endl;
    // if (nowPoint > 2) return rooms;

    for (int i = 0; i < ways.size(); i++) {
        cout << "i:" << i << endl;
        if (ways.at(i).from != nowRoom && 
            ways.at(i).to != nowRoom) {
            continue;
        }

        int nextRoom;
        if (ways.at(i).from == nowRoom) {
            nextRoom = ways.at(i).to;
        } else {
            nextRoom = ways.at(i).from;
        }
        cout << "nextRoom:" << nextRoom << endl;
        cout << "lastRoom:" << lastRoom << endl;
        if (lastRoom == nextRoom) {
            continue;
        }

        // nowPointで更新
        if (rooms.at(nextRoom - 1).minCount == 0 || 
            rooms.at(nextRoom - 1).minCount > nowPoint) {

            rooms.at(nextRoom - 1).minCount = nowPoint;
            rooms.at(nextRoom - 1).rote = nowRoom;
            // int nextPoint = nowPoint + 1;
            calc(ways, rooms, nowRoom, nextRoom, nowPoint + 1);
        }
    }
    return rooms;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Way> ways(M);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        if (A < B) {
            ways.at(i).from = A;
            ways.at(i).to = B;
        } else {
            ways.at(i).from = B;
            ways.at(i).to = A;
        }
    }

    // 昇順で並び替え
    sort(ways.begin(), ways.end());

    vector<Room> rooms(N);

    rooms.at(0).minCount = 1; // 1つの部屋
    calc(ways, rooms, 1, 1, 1);

/*
    if (find(rooms.begin(), rooms.end(), 0) == rooms.end()) {
        cout << "No";
        return 0;
    }
    */
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++) {
        cout << rooms.at(i).rote << endl;
    }

}
