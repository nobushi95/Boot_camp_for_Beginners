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
    int N;
    cin >> N;
    vector<ll> T(N);
    FORE(t, T) cin >> t;
    int M;
    cin >> M;
    vector<ll> P(M), X(M);
    REP(i, 0, M) {
        cin >> P[i] >> X[i];
    }

    ll sum = accumulate(T.begin(), T.end(), 0LL);
    REP(i, 0, M) {
        ll diff = T[P[i] - 1] - X[i];
        cout << sum - diff << endl;
    }

    return 0;
}