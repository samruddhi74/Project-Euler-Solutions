#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int num=1,den=1;
    for(int i=10;i<=99;i++){
        for(int j=10;j<=99;j++){
            if(i%10 != 0 && j%10 !=0){
                int a=i/10,b=i%10,c=j/10,d=j%10;
                if(a == c && b<d && i*d == j*b){
                    num *= b,den*= d;
                }
                else if(a == d && b<c && i*c == j*b){
                    num *= b,den*= c;
                }
                else if(b == c && a<d && i*d == j*a){
                    num *= a,den*= d;
                }
                else if(b == d && a<c && i*c == j*a){
                    num *= a,den*= c;
                }
            }
        }
    }
    cout<<num<<' '<<den;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    return 0;
}
