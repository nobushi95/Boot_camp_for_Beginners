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
    vector<ll> H(N);
    FORE(h, H) cin >> h;

    RREP(i, N - 2, 0) {
        ll diff = H[i] - H[i + 1];
        if (diff > 1) {
            cout << "No" << endl;
            return 0;
        }

        if (diff == 1) {
            H[i]--;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
