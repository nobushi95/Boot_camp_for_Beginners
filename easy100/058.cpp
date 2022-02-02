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
    int N, T, A;
    cin >> N >> T >> A;
    vector<ll> H(N);
    FORE(h, H) cin >> h;

    double minDiff = DBL_MAX;
    int ans;
    REP(i, 0, N) {
        double curDiff = abs(double(A) - (double(T) - H[i] * 0.006));
        if (curDiff < minDiff) {
            minDiff = curDiff;
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}