#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
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

    ll ans = 0;
    ll v[] = {3, 5, 7};
    REPEQ(digit, 3, 9) {
        REP(msk, 0, ll(pow(3, digit))) {
            ll x = 0;
            ll m = msk;
            ll cnt[] = {0, 0, 0};
            REP(i, 0, digit) {
                ll d = m % 3;
                x = x * 10 + v[d];
                cnt[d]++;
                m /= 3;
            }
            if (x <= N and 0 < cnt[0] and 0 < cnt[1] and 0 < cnt[2]) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
