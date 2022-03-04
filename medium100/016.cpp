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
    vector<ll> s(N);
    FORE(si, s) cin >> si;

    sort(ALL(s));

    ll sum = accumulate(ALL(s), 0LL);
    if (sum % 10 != 0) {
        cout << sum << endl;
    } else {
        ll amount = 0;
        FORE(si, s) {
            if (si % 10 != 0) {
                amount = si;
                break;
            }
        }
        if (amount == 0) amount = sum;
        cout << sum - amount << endl;
    }

    return 0;
}
