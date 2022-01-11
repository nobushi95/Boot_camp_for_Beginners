#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N, K;
    cin >> N >> K;

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    N = N % K;
    ll diff = abs(N - K);
    ll min = diff < N ? diff : N;
    cout << min << endl;

    return 0;
}