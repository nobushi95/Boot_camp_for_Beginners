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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    FORE(a, A) cin >> a;
    vector<ll> B(M), C(M);
    REP(i, 0, M) cin >> B[i] >> C[i];

    sort(ALL(A));
    vector<pair<ll, ll>> tbl(M);
    REP(i, 0, M) {
        tbl[i] = {B[i], C[i]};
    }
    sort(ALL(tbl), [](auto &l, auto &r) { return l.second < r.second; });

    ll ans = 0;
    ll i = 0;
    while (i < N) {
        if (tbl.size() == 0) ans += A[i];
        else if (A[i] < tbl.back().second) {
            ans += tbl.back().second;
            tbl.back().first--;
            if (tbl.back().first < 1) tbl.pop_back();
        } else {
            ans += A[i];
        }
        i++;
    }

    cout << ans << endl;

    return 0;
}
