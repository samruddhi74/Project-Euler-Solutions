#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s = "123456789";
    set<int> unique_products;  
    
    do {
        int product = stoi(s.substr(5, 4));

        int f = stoi(s.substr(0, 1)), s1 = stoi(s.substr(1, 4));
        if (f * s1 == product) unique_products.insert(product);
        
        f = stoi(s.substr(0, 2)), s1 = stoi(s.substr(2, 3));
        if (f * s1 == product) unique_products.insert(product);
        
        f = stoi(s.substr(0, 3)), s1 = stoi(s.substr(3, 2));
        if (f * s1 == product) unique_products.insert(product);
        
        f = stoi(s.substr(0, 4)), s1 = stoi(s.substr(4, 1));
        if (f * s1 == product) unique_products.insert(product);

    } while (next_permutation(s.begin(), s.end()));

    int ans = accumulate(unique_products.begin(), unique_products.end(), 0);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
