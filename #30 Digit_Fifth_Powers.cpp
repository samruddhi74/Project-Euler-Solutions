#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
    1 digit : 9^5 = 59049
    2 digits : 2*9^5 =118098
    3 digits : 3*9^5 =177147
    4 digits : 4*9^5 =236196
    5 digits : 5*9^5 = 295245
    6 digits : 6*9^5 =354294
    7 digits : 7*9^5 =413343
    seven digit maximum number does not reaches 7 digits so we will stop iteration till 354294
    */
   int ans =0;
   for(int i=2;i<=354294;i++){
    int num = i,sum=0;
    while(num){
        int j=num%10;
        sum += j*j*j*j*j;
        num/=10;
    } 
    if(sum == i) ans += i;
   }
   cout<<ans;
   return 0;
}
