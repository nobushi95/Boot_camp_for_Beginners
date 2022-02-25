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
    ll N;
    cin >> N;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    vector<bool> isPushed(N);

    ll i = 0;
    ll count = 0;
    while (true) {
        count++;
        if (isPushed[i]) {
            cout << -1 << endl;
            return 0;
        } else {
            isPushed[i] = true;
        }

        if (a[i] == 2) {
            cout << count << endl;
            return 0;
        }

        if (i == a[i] - 1) {
            cout << -1 << endl;
            return 0;
        }
        i = a[i] - 1;
    }

    return 0;
}
