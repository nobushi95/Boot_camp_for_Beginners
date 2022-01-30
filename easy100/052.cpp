#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int N;
    cin >> N;
    vector<ll> B(N - 1);
    FORE(b, B) cin >> b;

    int sum = B[0];
    REP(i, 1, N - 1) {
        sum += B[i] < B[i - 1] ? B[i] : B[i - 1];
    }
    sum += B[N - 2];

    cout << sum << endl;

    return 0;
}