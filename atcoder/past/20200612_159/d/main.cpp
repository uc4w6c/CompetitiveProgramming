#include <bits/stdc++.h>
using namespace std;

// D - Banned K
int main() {
    long long N;
    cin >> N;

    long long A[N];
    map<long long, long long> noMap;
    for (long long i = 0; i < N; i++) {
        cin >> A[i];
        noMap[A[i]]++;
    }

    long long pairCount = 0;
    for(auto x : noMap) {
        // cout << x.first << " " << x.second << "\n";
        long long count = x.second;
        pairCount += ((count * (count - 1)) / 2);
    }
    // cout << "pairCount:" << pairCount << endl;

    for (long long i = 0; i < N; i++) {
        // cout << A[i] << " : " << noMap[A[i]] << endl;
        cout << (pairCount - noMap[A[i]] + 1) << endl;
    }
}
/*
IN
5
1 1 2 1 2 1

1 1 1 1
1 2
  3 
  4
2 3
  4
3 4

(3 * 2)#6 / 2 = 3
(4 * 3)#12 / 2 = 6
(5 * 4)#20 / 2 = 10
(6 * 5)#30 / 2 = 15
*/

/*
IN
4
1 2 3 1

OUT
0
1
1
0

pair 1
*/
