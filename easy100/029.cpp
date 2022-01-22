#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    string S;
    cin >> S;

    int min = INT_MAX;
    for (int i = 0; i < S.size() - 2; i++) {
        int num = stoi(S.substr(i, 3));
        int diff = abs(num - 753);
        if (diff < min) min = diff;
    }

    cout << min << endl;

    return 0;
}