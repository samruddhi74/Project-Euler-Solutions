#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve(){
    ll ans = 0;
    // ans = sum from n= 1 to 1001 only odd n's 4*n*n - 6*n+6;
    for(int i=1;i<=1001;i+=2){
        ans += 1ll*4*i*i - 1ll*6*i + 6;
    }
    cout<<ans-3;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}
