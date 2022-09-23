#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll H, W;
    cin >> H >> W;
    vector<string> A(H);
    FORE(a, A) cin >> a;

    vector<vector<ll>> dist(H, vector<ll>(W, -1));
    queue<pair<ll, ll>> q;
    REP(i, 0, H) REP(j, 0, W) {
        if (A[i][j] == '#') {
            dist[i][j] = 0;
            q.push({i, j});
        }
    }

    ll dx[] = {1, 0, -1, 0};
    ll dy[] = {0, 1, 0, -1};
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        REP(d, 0, 4) {
            ll nx = cur.first + dx[d];
            ll ny = cur.second + dy[d];
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if (dist[nx][ny] == -1) {
                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                q.push({nx, ny});
            }
        }
    }

    ll ans = 0;
    REP(i, 0, H) REP(j, 0, W) chmax(ans, dist[i][j]);

    cout << ans << endl;

    return 0;
}
