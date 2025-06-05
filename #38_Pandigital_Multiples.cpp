#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ispossible(const string& s) {
    for (int i = 1; i <= 4; i++) {
        int n = stoi(s.substr(0, i));
        int ind = i;
        for (int k = 2;; k++) {
            string temp = to_string(n * k);
            int len = temp.length();
            if (ind + len > s.size()) break;
            if (s.substr(ind, len) == temp) {
                ind += len;
                if (ind == s.size()) return true;
            } else break;
        }
    }
    return false;
}

void solve() {
    string s = "123456789"; 
    string ans="";
    do {
        if (ispossible(s)) {
            if(s> ans) ans = s;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
