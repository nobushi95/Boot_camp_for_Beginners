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
    ll N, M;
    cin >> N >> M;
    vector<ll> a(N), b(N), c(M), d(M);
    REP(i, 0, N) cin >> a[i] >> b[i];
    REP(i, 0, M) cin >> c[i] >> d[i];


    REP(i, 0, N) {
        ll min = LLONG_MAX;
        ll n = M - 1;
        RREP(j, M - 1, 0) {
            ll dist = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if (dist <= min) {
                min = dist;
                n = j;
            }
        }
        cout << n + 1 << endl;
    }

    return 0;
}
