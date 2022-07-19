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
    ll N, K;
    cin >> N >> K;
    vector<ll> D(K);
    FORE(d, D) cin >> d;

    vector<bool> isKirai(10, false);
    FORE(d, D) isKirai[d] = true;

    ll ans = N;
    while (true) {
        bool isAns = true;
        ll candidate = ans;
        while (candidate != 0) {
            ll i = candidate % 10;
            if (isKirai[i]) {
                isAns = false;
                break;
            }
            candidate /= 10;
        }
        if (isAns) break;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
