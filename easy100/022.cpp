#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N, x;
    cin >> N >> x;
    vector<ll> a(N);
    for (auto &ai : a) cin >> ai;

    sort(a.begin(), a.end());
    
    int count = 0;

    for (const auto &ai : a) {
        x -= ai;
        if (x < 0) break;
        count++;
    }

    if (x > 0) count--;

    cout << count << endl;

    return 0;
}