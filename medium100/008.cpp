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
    ll N;
    cin >> N;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    ll over = count_if(ALL(a), [](auto n) { return n >= 3200; });
    if (over == N) {
        cout << 1 << " " << over << endl;
        return 0;
    }

    vector<bool> Rate(8, false);
    FORE(ai, a) {
        if (ai < 400) { 
            Rate[0] = true;
        } else if (ai < 800) {
            Rate[1] = true;
        } else if (ai < 1200) {
            Rate[2] = true;
        } else if (ai < 1600) {
            Rate[3] = true;
        } else if (ai < 2000) {
            Rate[4] = true;
        } else if (ai < 2400) {
            Rate[5] = true;
        } else if (ai < 2800) {
            Rate[6] = true;
        } else if (ai < 3200) {
            Rate[7] = true;
        }
    }

    ll c = count(ALL(Rate), true);
    ll max = c + over;

    cout << c << " " << max << endl;

    return 0;
}
