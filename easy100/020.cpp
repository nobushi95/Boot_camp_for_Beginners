#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int a1;
    cin >> a1;
    unordered_set<int> a;
    a.insert(a1);

    int i = 1;
    int ab = a1;
    while (true) {
        i++;
        int am = ab % 2 == 0 ? ab / 2 : ab * 3 + 1;
        if (a.find(am) != a.end()) break;
        ab = am;
        a.insert(am);
    }

    cout << i << endl;

    return 0;
}