#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

vector<int> prime(100000, 1);
// Function to get all the prime numbers
void doPrime() {
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < 100000; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j < 100000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

// Function to check whether the number of divisors are greater than or equals to 500
bool checkDivisors(ll n) {
    ll ans = 1;
    for (ll i = 2; i < 100000 && n > 1; i++) {
        if (prime[i] == 1) {
            ll cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            ans *= (cnt + 1);
        }
    }
    if (n > 1) {
        ans *= 2;
    }
    return ans >= 500;
}

// Function to get the traingular number
void getTriangularNum() {
    ll cur = 1;
    for (ll i = 2;; i++) {
        cur += i;
        if (checkDivisors(cur)) {
            cout << cur << endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    doPrime();
    getTriangularNum();

    return 0;
}
