#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> h(N);
    FORE(hi, h) cin >> hi;

    sort(ALL(h));

    ll min = LLONG_MAX;
    REP(i, 0, h.size() - K + 1) {
        chmin(min, h[i + K - 1] - h[i]);
    }

    cout << min << endl;

    return 0;
}
