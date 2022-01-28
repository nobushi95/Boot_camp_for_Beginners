#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    ll N;
    cin >> N;
    vector<ll> H(N);
    FORE(h, H) cin >> h;

    ll count = 0;
    ll max = 0;
    REP(i, 0, N - 1) {
        if (H[i] < H[i+1]) {
            if (count > max) max = count;
            count = 0;
        } else {
            count++;
        }
    }
    max = max < count ? count : max;

    cout << max << endl;
    
    return 0;
}