#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll n, m, a;
    ll ans[2];

    cin >> n >> m >> a;
    ans[0] = (n+a-1)/a;
    ans[1] = (m+a-1)/a;

    cout << ans[0] * ans[1] << endl;
    return 0;
}