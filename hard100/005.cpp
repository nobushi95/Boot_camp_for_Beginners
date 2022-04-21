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

    multiset<ll> tbl;
    FORE(a, A) tbl.insert(a);

    while (M > 0) {
        auto eitr = tbl.end();
        eitr--;
        ll num = *eitr;
        tbl.erase(eitr);
        tbl.insert(num / 2);
        M--;
    }

    ll ans = accumulate(ALL(tbl), 0LL);
    cout << ans << endl;

    return 0;
}
