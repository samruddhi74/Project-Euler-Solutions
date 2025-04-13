#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve() { 
    //9!*8 = 2903040 = 7digit number , should have to be 8 digit , so this is the limit 
    ll ans=0;
    vector<int> fact={1,1,2,6,24,120,720,5040,40320,362880};
    for(int i=10;i<2903040;i++){
        int n  = i,temp=0;
        while(n){
            temp += fact[n%10];
            n/=10;
        }
        if(temp == i) ans += i;
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
