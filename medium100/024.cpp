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
    ll N, A, B;
    cin >> N >> A >> B;

    if (A > B) {
        cout << 0 << endl;
        return 0;
    }

    if (N < 2) {
        if (A == B) cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }

    if (A == B) {
        cout << 1 << endl;
        return 0;
    }

    ll ans = (A + B * (N - 1)) - ((N - 1) * A + B) + 1;
    cout << ans << endl;

    return 0;
}