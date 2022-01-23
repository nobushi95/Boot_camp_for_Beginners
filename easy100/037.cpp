#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N, K, Q;
    cin >> N >> K >> Q;
    map<ll, ll> tbl;
    for (int i = 1; i <= Q; i++) {
        ll a;
        cin >> a;
        tbl[a]++;
    }

    for (int i = 1; i <= N; i++) {
        if (tbl[i] > Q - K) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}