#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> count;
    for (int i = 1; i <= N; i++) count[i] = 0;

    for (int i = 1; i <= N; i++) {
        int c = i;
        while (c % 2 == 0) {
            count[i]++;
            c /= 2;
        }
    }

    int max = max_element(count.begin(), count.end(), [](const auto &left, const auto &right){ return left.second < right.second; })->first;
    cout << max << endl;

    return 0;
}