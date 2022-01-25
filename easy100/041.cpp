#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    ll N;
    cin >> N;
    vector<ll> P(N);
    FORE(p, P) cin >> p;

    vector<ll> acc = P;
    REP(i, 1, N) {
        if (acc[i - 1] < acc[i]) {
            acc[i] = acc[i - 1];
        }
    }

    int count = 1;
    REP(i, 1, N) {
        if (acc[i - 1] >= P[i]) count++;
    }

    cout << count << endl;

    return 0;
}