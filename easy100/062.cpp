#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> C(H, vector<char>(W));
    REP(i, 0, H) {
        REP(j, 0, W) {
            cin >> C[i][j];
        }
    }
    
    REP(i, 0, 2 * H) {
        REP(j, 0, W) {
            cout << C[i / 2][j];
        }
        cout << endl;
    }

    return 0;
}