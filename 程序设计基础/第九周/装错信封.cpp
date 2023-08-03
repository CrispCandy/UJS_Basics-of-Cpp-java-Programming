#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return (n - 1) * (f(n - 1) + f(n - 2));
}
signed main()
{
    int n; cin >> n;
    cout << f(n) << endl;

    return 0;
}