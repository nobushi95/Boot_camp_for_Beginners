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

ll chose2(ll n) {
    if (n == 2) return 1;
    ll res = n * (n - 1) / 2;
    return res;
}

int main() {
    ll N;
    cin >> N;
    vector<string> s(N);
    FORE(si, s) cin >> si;

    map<map<char, ll>, ll> tbl;
    FORE(si, s) {
        map<char, ll> tbl2;
        FORE(c, si) {
            tbl2[c]++;
        }
        tbl[tbl2]++;
    }

    ll ans = 0;
    FORE(t, tbl) {
        if (t.second > 1) {
            ans += chose2(t.second);
        }
    }

    cout << ans << endl;

    return 0;
}
