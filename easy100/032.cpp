#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int x = 0, max = 0;
    for (const char c: S) {
        if (c == 'I') x++;
        if (c == 'D') x--;
        if (max < x) max = x;
    }

    cout << max << endl;

    return 0;
}