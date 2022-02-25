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
    string S;
    cin >> S;

    vector<ll> acc(1);

    ll count = 0;
    REP(i, 0, S.length()) {
        if (S[i] == 'W') {
            acc.push_back(acc.back() + count);
            count = 0;
        } else {
            count++;
        }
    }

    ll ans = accumulate(ALL(acc), 0LL);
    cout << ans << endl;

    return 0;
}
