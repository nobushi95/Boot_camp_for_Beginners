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
    int N;
    cin >> N;
    vector<ll> a(3 * N);
    FORE(ai, a) cin >> ai;

    sort(ALL(a));

    ll sum = 0;
    for (ll i = 3 * N - 2; i >= N; i-=2) {
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}
