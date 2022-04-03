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
    ll n;
    cin >> n;
    vector<string> S(n);
    FORE(s, S) cin >> s;

    vector<map<char, ll>> tbl(n);
    REP(i, 0, n) {
        FORE(s, S[i]) {
            tbl[i][s]++;
        }
    }

    for (char c = 'a'; c <= 'z'; c++) {
        ll num = LLONG_MAX;
        REP(i, 0, n) {
            chmin(num, tbl[i][c]);
        }
        REP(i, 0, num) {
            cout << c;
        }
    }
    cout << endl;

    return 0;
}
