#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX_PRIME = 1e6; 

vector<int> primes(MAX_PRIME, 1);

void generate_primes() {
    primes[0] = primes[1] = 0;
    for (int i = 2; i * i < MAX_PRIME; i++) {
        if (primes[i]) {
            for (int j = i * i; j < MAX_PRIME; j += i) {
                primes[j] = 0;
            }
        }
    }
}

bool is_prime(int n) {
    if (n < 0) return false;  
    if (n < MAX_PRIME) return primes[n];
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return false;
    }
    return true;
}

int count_primes(int a, int b) {
    int i = 0;
    while (is_prime(i * i + a * i + b)) {
        i++;
    }
    return i;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    generate_primes();  

    int maxi = 0;
    ll ans = 0;
    for (int a = -1000; a <= 1000; a++) {
        for (int b = -1000; b <= 1000; b++) {
            int cnt = count_primes(a, b);
            if (cnt > maxi) {
                maxi = cnt;
                ans = a * b;
            }
        }
    }
    cout << ans;
}
