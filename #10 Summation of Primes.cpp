#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

void solve() {
    int n = 2 * 1e6;
    vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    ll sum = 0;

    for (int i = 2; i < n; ++i) {
        if (is_prime[i]) {
            sum += i;
            for (int j = i*2 ; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    cout << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
