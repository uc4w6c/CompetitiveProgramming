#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int j = 1;
    for (int i = N; i > 0; i--) {
        cout << j % i << endl;
        j++;
    }
}
/*
10の時

10
1
2
3
4
5
1
3
2
1
0
*/
/*
11の時

1
2
3
4
5
0
2
0
0
0
0
*/