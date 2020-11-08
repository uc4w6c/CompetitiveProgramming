#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<bool>> block(2, vector<bool>(2, false));
    block[1][1] = true;

    if (block[1][1]) cout << "true" << endl;
    if (block[0][0]) cout << "true" << endl;
}
