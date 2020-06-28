#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <numeric>
#include <math.h> 

using namespace std;


// 参考: https://atcoder.jp/contests/nomura2020/submissions/13753495
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n, i, j, k, ans, carry, x;
	bool valid = true;

	cin >> n;
	vector<long long> a(n + 1), s(n + 2);
	for (i = 0; i <= n; i++) cin >> a[i];
	s[n + 1] = 0; 
	for (i = n; i >= 0; i--) s[i] = s[i + 1] + a[i];

    // for (i = 0; i <= n; i++) cout << i << ":" << s[i] << endl;

	ans = 0;  // 木の合計
	carry = 1;  // 二分木の数(葉は含まない)
    // a[i]  葉の数
	for (i = 0; i <= n; i++) {
		if (carry < a[i]) {
			valid = false;
			break;
		}

        cout << "carry:" << carry << ", a[" << i << "]:" << a[i] << endl;
        cout << "s[" << i + 1 << "]:" << s[i + 1] << endl;
		carry -= a[i];
		carry = min(carry, s[i + 1]);

		ans += carry + a[i];

        /*
        cout << "a " << i << ":";
        cout << a[i] << endl;

        cout << "carry " << i << ":";
        cout << carry << endl;
        */
		carry *= 2;
	}

	if (!valid) ans = -1;
	cout << ans << "\n";

	return 0;
}
