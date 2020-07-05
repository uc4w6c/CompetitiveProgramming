#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    double N;
    cin >> N;
    int result = (ceil(N / 1000) * 1000) - N;
    cout << result;
}
