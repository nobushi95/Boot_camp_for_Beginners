#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int p12x = x2 - x1;
    int p12y = y2 - y1;
    int p23x = -p12y;
    int p23y = p12x;

    x3 = x2 + p23x;
    y3 = y2 + p23y;
    x4 = x3 - p12x;
    y4 = y3 - p12y;

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

    return 0;
}