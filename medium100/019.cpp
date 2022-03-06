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
    ll R, G, B, N;
    cin >> R >> G >> B >> N;

    ll count = 0;
    REPEQ(r, 0, 3000) REPEQ(g, 0, 3000) {
        ll bsum = N - r * R - g * G;
        if (bsum < 0) continue;
        if (bsum % B == 0) count++;
    }

    cout << count << endl;

    return 0;
}
