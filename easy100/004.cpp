#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a = N / 1.08;

    if (int(a * 1.08) == N) {
        cout << a << endl;
    } else if (int((a + 1) * 1.08) == N) {
        cout << a + 1 << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}