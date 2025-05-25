#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> v(1e6,1);

void primes(){
    v[0]=v[1] =0;
    for(int i=2;i<v.size();i++){
        if(v[i]){
            for(int j=i*2;j<v.size();j+=i){
                v[j] =0;
            }
        }
    }
}

void solve(){
    primes();
    int cnt =0;
    for(int i=2;i<v.size();i++){
        if(v[i]){
            int k = log10(i)+1;
            string s= to_string(i);
            bool ok=1;
            for(int i=1;i<k;i++){
                string temp = s.substr(i)+s.substr(0,i);
                ok &= v[stoi(temp)];
            }
            cnt += ok;
        }
    }
    cout<<cnt;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   solve();
    return 0;
}
