#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main()
{
    ll N, M;
    cin >> N >> M;
    vector<ll> L(M), R(M);
    for (int i = 0; i < M; i++) {
        cin >> L.at(i) >> R.at(i);
    }

    ll lmax = *max_element(L.begin(), L.end());
    ll rmin = *min_element(R.begin(), R.end());

    int count;
    if (lmax <= rmin) {
        count = rmin - lmax + 1;
    } else {
        count = 0;
    }
    cout << count << endl;

    return 0;
}