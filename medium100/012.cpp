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
    vector<vector<char>> a(H, vector<char>(W));
    REP(i, 0, H) REP(j, 0, W) cin >> a[i][j];

    vector<vector<char>> ans;

    REP(i, 0, H) {
        bool isRowAllWhite = true;
        REP(j, 0, W) {
            bool isWhite = a[i][j] == '.';
            isRowAllWhite = isRowAllWhite && isWhite;
        }
        if (!isRowAllWhite) {
            ans.push_back(a[i]);
        }
    }

    vector<vector<bool>> isExist(ans.size(), vector<bool>(W));
    REP(j, 0, W) {
        bool isColAllWhite = true;
        REP(i, 0, ans.size()) {
            bool isWhite = ans[i][j] == '.';
            isColAllWhite = isColAllWhite && isWhite;
        }
        if (!isColAllWhite) {
            REP(i, 0, ans.size()) isExist[i][j] = true;
        }
    }

    REP(i, 0, ans.size()) {
        REP(j, 0, W) {
            if (isExist[i][j]) cout << ans[i][j];
        }
        cout << "\n";
    }
    cout << endl;

    return 0;
}
