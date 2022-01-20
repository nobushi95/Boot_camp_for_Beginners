#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main()
{
    ll H;
    cin >> H;
    ll log = log2(H);
    ll sum = 0;
    for (int i = 0; i <= log; i++)
        sum += pow(2, i);

    cout << sum << endl;
    return 0;
}