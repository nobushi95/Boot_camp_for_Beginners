#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> honest(N), liar(N);
    REP(i, 0, N) {
        ll A;
        cin >> A;
        REP(j, 0, A) {
            ll x, y;
            cin >> x >> y;
            if (y == 0) liar[i].push_back(x - 1);
            else honest[i].push_back(x - 1);
        }
    }

    ll ans = 0;
    REP(bit, 0, 1 << N) {
        bool ok = true;
        ll cur = 0;
        REP(i, 0, N) {
            if (bit & (1 << i)) {
                cur++;
                FORE(h, honest[i]) {
                    if (!(bit & (1 << h))) {
                        ok = false;
                        break;
                    }
                }
                FORE(l, liar[i]) {
                    if (bit & (1 << l)) {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if (ok) {
            chmax(ans, cur);
        }
    }

    cout << ans << endl;

    return 0;
}
