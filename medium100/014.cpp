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
    ll H, W;
    cin >> H >> W;
    vector<string> S(H);
    FORE(s, S) cin >> s;

    REP(i, 0, H) {
        REP(j, 0, W) {
            if (S[i][j] == '.') continue;

            bool isNearBlack = false;
            REPEQ(k, -1, 1) REPEQ(l, -1, 1) {
                if ((k == 0  && l ==  0) || 
                    (k == -1 && l == -1) || 
                    (k == -1 && l ==  1) ||
                    (k ==  1 && l == -1) ||
                    (k ==  1 && l == 1)) continue;

                if (0 <= i + k && i + k < H && 0 <= j + l && j + l < W) {
                    isNearBlack = isNearBlack || (S[i + k][j + l] == '#');
                }
            }
            if (!isNearBlack) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
