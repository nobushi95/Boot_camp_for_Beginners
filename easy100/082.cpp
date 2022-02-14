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
    ll Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;
    
    chmin(H, 2 * Q);
    chmin(S, 2 * H);

    if (N % 2 == 0) {
        if (2 * S < D) {
            cout << S * N << endl;
        } else {
            cout << D * (N / 2) << endl;
        }
    } else {
        if (2 * S < D) {
            cout << S * N << endl;
        } else {
            cout << D * (N / 2) + S <<endl;
        }
    }

    return 0;
}
