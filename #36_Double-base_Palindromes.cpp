#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool checkBinary(int n) {
    string binary = bitset<20>(n).to_string(); 
    binary.erase(0, binary.find('1'));   
    string temp = binary;      
    reverse(binary.begin(), binary.end());     
    return temp == binary;
}
bool checkPalindrome(int n){
    int rev = 0,N = n;
    while(n) {
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev == N;
}
void solve(){
    ll sum =0;
    for(int i=1;i<=1000000;i++){
        if(checkBinary(i) && checkPalindrome(i)) sum += i;
    }
    cout<<sum;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   solve();
    return 0;
}
