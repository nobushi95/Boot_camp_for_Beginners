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
    string S;
    cin >> S;

    ll ans = 0;
    map<char, bool> left;
    REP(i, 0, N - 1) {
        ll count = 0;
        REPEQ(j, 0, i) {
            left[S[j]] = true;
        }
        REP(k, i + 1, N) {
            if (left[S[k]]) {
                count++;
                left[S[k]] = false;
            }
        }
        chmax(ans, count);
    }

    cout << ans << endl;

    return 0;
}
