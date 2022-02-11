#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    ll ans = LLONG_MAX;

    ll betu = A * X + B * Y;
    chmin(ans, betu);

    ll t = X > Y ? X : Y;
    ll allC = C * 2 * t;
    chmin(ans, allC);

    if (X < Y) {
        ll a = C * X * 2;
        ll b = B * (Y - X);
        chmin(ans, a + b);
    } else {
        ll a = A * (X - Y);
        ll b = C * Y * 2;
        chmin(ans, a + b);
    }

    cout << ans << endl;

    return 0;
}