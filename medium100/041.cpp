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
    string s;
    cin >> s;

    map<char, ll> tbl;
    FORE(si, s) {
        tbl[si]++;
    }

    ll ans = LLONG_MAX;
    FORE(t, tbl) {
        vector<ll> pos;
        pos.push_back(-1);
        REP(i, 0, s.length()) {
            if (s[i] == t.first) pos.push_back(i);
        }
        pos.push_back(s.length());

        ll cur = 0;
        REP(i, 0, pos.size() - 1) {
            chmax(cur, pos[i + 1] - pos[i] - 1);
        }
        chmin(ans, cur);
    }

    cout << ans << endl;

    return 0;
}
