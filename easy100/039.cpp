#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (auto &a: A) cin >> a;
    vector<ll> lmax = A, rmax = A;

    for (int i = 1; i < N; i++) {
        if (lmax.at(i) < lmax.at(i - 1)) {
            lmax.at(i) = lmax.at(i - 1);
        }
    }

    for (int i = N - 2; i >= 0; i--) {
        if (rmax.at(i) < rmax.at(i + 1)) {
            rmax.at(i) = rmax.at(i + 1);
        }
    }

    cout << rmax.at(1) << endl;
    for (int i = 1; i < N - 1; i++) {
        ll l = lmax.at(i - 1);
        ll r = rmax.at(i + 1);
        cout << (l > r ? l : r) << endl;
    }
    cout << lmax.at(N - 2) << endl;

    return 0;
}