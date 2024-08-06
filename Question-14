#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll solve(ll n, vector<ll>& v) {
    if (n < 1000000 && v[n] != -1) return v[n];

    ll ans = 0;
    if (n % 2 == 0)
        ans = 1 + solve(n / 2, v);
    else
        ans = 1 + solve(3 * n + 1, v);

    if (n < 1000000) v[n] = ans;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll> v(1000001, -1);
    v[1] = 0;

    for (ll i = 2; i <= 1000000; ++i) {
        solve(i, v);
    }

    ll maxi = 0;
    int ans;
    for (int i = 1; i <= 1000000; ++i) {
        if(v[i] > maxi)
        {
            maxi = v[i];
            ans = i;
        }
    }

    cout << ans << "\n";
    return 0;
}
