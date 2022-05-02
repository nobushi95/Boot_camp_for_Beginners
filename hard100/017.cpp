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
    ll N;
    cin >> N;
    vector<string> s(N);
    FORE(si, s) cin >> si;

    ll ans = 0;
    FORE(si, s) {
        REP(i, 0, si.length() - 1) {
            if (si[i] == 'A' && si[i + 1] == 'B') ans++;
        }
    }

    ll c1 = 0, c2 = 0, c3 = 0;
    FORE(si, s) {
        if (si.front() == 'B' && si.back() == 'A') c1++;
        if (si.front() == 'B' && si.back() != 'A') c2++;
        if (si.front() != 'B' && si.back() == 'A') c3++;
    }

    if (c1 == 0) {
        ans += min(c2, c3);
    } else {
        if (c2 > 0 || c3 > 0) ans += c1 + min(c2, c3);
        else ans += c1 - 1;
    }

    cout << ans << endl;

    return 0;
}
