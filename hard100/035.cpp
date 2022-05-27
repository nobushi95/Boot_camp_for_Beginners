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
    ll N, H;
    cin >> N >> H;
    vector<ll> a(N), b(N);
    REP(i, 0, N) cin >> a[i] >> b[i];

    ll maxA = *max_element(ALL(a));

    vector<ll> throwKatana;
    FORE(bi, b) {
        if (maxA < bi) throwKatana.push_back(bi);
    }
    sort(ALL(throwKatana), greater<ll>());

    ll ans = 0;
    FORE(t, throwKatana) {
        H -= t;
        ans++;
        if (H <= 0) {
            cout << ans << endl;
            return 0;
        }
    }

    ans += (H + maxA - 1) / maxA;
    cout << ans << endl;

    return 0;
}
