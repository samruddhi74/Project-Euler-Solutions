#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> v(1e6, 1);

void primes() {
    v[0] = v[1] = 0;
    for (int i = 2; i < v.size(); i++) {
        if (v[i]) {
            for (int j = 2 * i; j < v.size(); j += i) {
                v[j] = 0;
            }
        }
    }
}

bool isTruncatable(int n) {
    string s = to_string(n);
    for (int i = 1; i < s.size(); i++) {
        int temp = stoi(s.substr(i));
        if (!v[temp]) return false;
    }
    bool ok= 1;
    while(n){
        ok &= v[n];
        n/=10;
    }

    return ok;
}

void solve() {
    primes();
    int cnt = 0;
    ll sum = 0;

    for (int i = 11; cnt < 11 && i < v.size(); i++) {
        if (v[i] && isTruncatable(i)) {
            cnt++;
            sum += i;
        }
    }
    cout << "Sum: " << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
