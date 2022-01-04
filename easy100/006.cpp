#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    long long H, W;
    cin >> H >> W;

    // エッジケースとして、1行もしくは1列の場合は移動できないことを考えないといけない
    if (H == 1 or W == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (H * W % 2 == 0) {
        cout << H * W / 2 << endl;
    } else {
        cout << H * W / 2 + 1 << endl;
    }

    return 0;
}