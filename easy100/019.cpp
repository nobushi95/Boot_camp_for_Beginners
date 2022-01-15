#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> A(M);
    for (auto &a: A) cin >> a;

    int l = 0, r = 0;
    for (const auto &a : A) {
        if (X < a) l++;
        if (X > a) r++;
    }

    cout << (l > r ? r : l) << endl;

    return 0;
}