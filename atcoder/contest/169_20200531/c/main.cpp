#include <bits/stdc++.h>
using namespace std;

// 
bool is_product_overflow(long long a, long long b) {

	long prod = a * b;
	
	return (prod / b != a);
}

int main() {
    long long A;
    double B;
    cin >> A >> B;
    // long long a = pow(10, 15);
    // cout << a << endl;

    cout << static_cast<long long>(A * B);
}
// 9990000000000000
// 9990000000000000
