#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int findWays(vector<int>& v,int sum,int ind){
    if(sum == 200) return 1;
    if(sum > 200 || ind >= 8) return 0;
    int take = findWays(v,sum+v[ind],ind);
    int nottake = findWays(v,sum,ind+1);
    return take+nottake;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*We have to make sum of 200*/
    vector<int> v={1,2,5,10,20,50,100,200};
    cout<<findWays(v,0,0);
   return 0;
}
