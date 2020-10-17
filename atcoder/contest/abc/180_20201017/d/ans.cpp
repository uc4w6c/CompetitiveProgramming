#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x,y,a,b;
    cin >> x >> y >> a >> b;
    long long ans=0;
    while((double)a*x<=2e18 && a*x<=x+b && a*x<y){
        x*=a;
        ans++;
    }
    cout << ans+(y-1-x)/b << endl;
}
