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
    vector<ll> k(M);
    vector<vector<ll>> s(M);
    REP(i, 0, M) {
        cin >> k[i];
        REP(j, 0, k[i]) {
            ll v;
            cin >> v;
            s[i].push_back(v);
        }
    }
    vector<ll> p(M);
    FORE(pi, p) cin >> pi;

    ll ans = 0;
    bitset<10> b;
    REP(i, 0, pow(2, N)) {
        b = i;
        vector<bool> sw(N, false);
        REP(j, 0, N) {
            if (b[j]) sw[j] = true;
        }

        bool isAllOn = true;
        REP(j, 0, M) {
            ll cnt = 0;
            REP(l, 0, k[j]) {
                if (sw[s[j][l] - 1]) cnt++;
            }
            if (cnt % 2 == 0 && p[j] == 1) isAllOn = false;
            if (cnt % 2 == 1 && p[j] == 0) isAllOn = false;
        }
        if (isAllOn) ans++;
    }

    cout << ans << endl;
    return 0;
}
