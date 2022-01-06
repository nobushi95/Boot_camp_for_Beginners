#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> x(N);
    for (int i = 0; i < N; i++) cin >> x.at(i);

    int sum = 0;
    for (const auto xi : x) {
        int a = xi;
        int b = K - xi;
        sum += a < b ? a * 2 : b * 2;
    }

    cout << sum << endl;

    return 0;
}