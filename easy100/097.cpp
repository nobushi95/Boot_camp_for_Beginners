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
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(N);
    REP(i, 0, N) {
        cin >> A[i] >> B[i];
    }

    vector<pair<ll, ll>> tbl(N);
    REP(i, 0, N) {
        tbl[i].first = A[i];
        tbl[i].second = B[i];
    }

    sort(ALL(tbl), [](auto &left, auto &right) { return left.first < right.first; });

    ll ans = 0;
    ll sum = 0;
    REP(i, 0, N) {
        ll d = M - sum;
        if (tbl[i].second < d) {
            sum += tbl[i].second;
            ans += tbl[i].first * tbl[i].second;
        } else {
            ans += tbl[i].first * d;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
