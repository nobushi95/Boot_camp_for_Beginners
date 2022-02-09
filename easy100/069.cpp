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
    string S;
    cin >> S;
    int N = S.length();

    vector<vector<int>> dp(N + 2, vector<int>(3, INT_MIN));
    dp[0][0] = 0;

    REP(i, 0, N) {
        REPEQ(pre, 0, 2) {
            REPEQ(d, 1, 2) {
                if (0 <= dp[i][pre]) {
                    if (pre == d) {
                        if (d == 1) {
                            if (S[i - 1] == S[i]) continue;
                        }
                        else if (d == 2) {
                            if (S.substr(i - 2, 2) == S.substr(i, 2)) continue;
                        }
                    }
                }
                chmax(dp[i + d][d], dp[i][pre] + 1);
            }
        }
    }

    cout << max(dp[N][1], dp[N][2]) << endl;

    return 0;
}