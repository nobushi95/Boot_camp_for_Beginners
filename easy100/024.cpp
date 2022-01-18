#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll A, B, M;
    cin >> A >> B >> M;
    vector<ll> a(A), b(B);
    map<pair<ll, ll>, ll> tbl;
    for (auto &ai : a) cin >> ai;
    for (auto &bi : b) cin >> bi;

    ll min = *min_element(a.begin(), a.end()) + *min_element(b.begin(), b.end());

    for (ll i = 0; i < M; i++) {
        ll xi, yi, ci;
        cin >> xi >> yi >> ci;
        xi--;
        yi--;
        ll sum = a.at(xi) + b.at(yi) - ci;
        if (sum < min) min = sum;
    }

    cout << min << endl;

    return 0;
}