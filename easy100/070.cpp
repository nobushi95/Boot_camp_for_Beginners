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
    int X;
    cin >> X;
    vector<bool> dp(X + 110, false);
    dp[0] = true;

    REPEQ(i, 0, X) {
        if (dp[i]) {
            REPEQ(j, 0, 5) {
                dp[i + j + 100] = true;
            }
        }
    }

    cout << (dp[X] ? 1 : 0) << endl;

    return 0;
}