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

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    vector<ll> v = {A, B, C};
    sort(ALL(v));
    ll min = v[0];
    ll mid = v[1];
    ll max = v[2];
    ll diff = mid - min;

    ll ans = 0;
    ll goal;
    if (diff % 2 == 0) {
        goal = max;
    } else {
        goal = max + 1;
        min++;
        ans++;
        diff = mid - min;
    }

    ans += diff / 2 + goal - mid;

    cout << ans << endl;

    return 0;
}
