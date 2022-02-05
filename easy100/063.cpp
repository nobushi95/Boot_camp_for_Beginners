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
    vector<int> a(N);
    FORE(ai, a) cin >> ai;

    if (find(a.begin(), a.end(), 1) == a.end()) {
        cout << -1 << endl;
        return 0;
    }

    int count = 0;
    int index = 1;
    REP(i, 0, N) {
        if (a[i] == index) {
            index++;
        } else {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}