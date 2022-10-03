#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll N;
    cin >> N;
    vector<ll> x(N), y(N), h(N);
    REP(i, 0, N) cin >> x[i] >> y[i] >> h[i];

    REPEQ(cx, 0, 100) REPEQ(cy, 0, 100) {
        ll H;
        REP(i, 0, N) if (h[i] != 0) {
            H = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
            break;
        }
        bool isOk = true;
        REP(i, 0, N) {
            ll estimated = max(H - abs(x[i] - cx) - abs(y[i] - cy), 0LL);
            if (estimated != h[i]) {
                isOk = false;
                break;
            }
        }
        if (isOk) {
            cout << cx << " " << cy << " " << H << endl;
        }
    }

    return 0;
}
