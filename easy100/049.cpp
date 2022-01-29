#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> a(H, vector<char>(W));
    REP(j, 0, H) {
        REP(i, 0, W) {
            cin >> a[j][i];
        }
    }

    REP(i, 0, W + 2) {
        cout << "#";
    }
    cout << endl;

    REP(j, 0, H) {
        cout << "#";
        REP(i, 0, W) {
            cout << a[j][i];
        }
        cout << "#" << endl;
    }

    REP(i, 0, W + 2) {
        cout << "#";
    }
    cout << endl;

    return 0;
}