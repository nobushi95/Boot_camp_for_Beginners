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
    ll H, W;
    cin >> H >> W;
    vector<string> A(H);
    FORE(a, A) cin >> a;

    REP(i, 0, H - 1) {
        ll r, l;
        RREP(j, W - 1, 0) if (A[i][j] == '#') { r = j; break; }
        REP(j, 0, W) if (A[i + 1][j] == '#') { l = j; break; }
        if (r != l) {
            cout << "Impossible" << endl;
            return 0;
        }
    }

    cout << "Possible" << endl;

    return 0;
}
