#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ll N; cin >> N;
    vector<pair<ll, ll>> fac;
    for(ll p = 2; p * p <= N; p++){
        if(N % p != 0) continue;
        ll cnt = 0;
        while(N % p == 0){
            cnt++;
            N /= p;
        }
        fac.push_back(make_pair(p, cnt));
    }
    if(N != 1) fac.push_back(make_pair(N,1));
    ll ans = 0;
    for(auto x:fac){
        cout << "first:" << x.first << endl;
        cout << "second:" << x.second << endl;
        ll e = x.second;
        ll cnt = 0;
        ll tmp = 1;
        while(e >= tmp){    
            e -= tmp;
            tmp++;
            cnt++;
        }
        ans += cnt;
    }
    cout << ans << endl;
}
