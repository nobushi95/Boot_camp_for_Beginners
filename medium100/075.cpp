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
ll ceil(ll a, ll b) { return (a + b - 1) / b; }

int main() {
    ll N, K, R, S, P;
    cin >> N >> K >> R >> S >> P;
    string T;
    cin >> T;

    vector<bool> tbl(N, false);
    REP(i, 0, N) {
        if (i - K < 0) {
            tbl[i] = true;
        } else {
            char t = T[i];
            char pt = T[i - K];
            if (t == pt) {
                if (tbl[i - K]) tbl[i] = false;
                else tbl[i] = true;
            } else {
                tbl[i] = true;
            }
        }
    }

    ll ans = 0;
    REP(i, 0, N) {
        if (!tbl[i]) continue;
        char t = T[i];
        if (t == 'r') {
            ans += P;
        } else if (t == 's') {
            ans += R;
        } else if (t == 'p') {
            ans += S;
        }
    }

    cout << ans << endl;

    return 0;
}
