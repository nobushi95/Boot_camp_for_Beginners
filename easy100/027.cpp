#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;

    ll times = N / (A + B);
    ll blue = times * A + min(A, N % (A + B));
    cout << blue << endl;
    return 0;
}