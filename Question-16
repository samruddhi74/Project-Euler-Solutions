#include<iostream>
#include<algorithm>
#include<climits>
#include<queue>

using namespace std;



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

int carry =0;
queue<int> q;
q.push(1);
for(int i=1;i<=1000;i++){
    int size = q.size();
    carry=0;
    while(size--){
        int n = q.front();q.pop();
        n*=2;
        n += carry;
        q.push(n%10);
        carry = n/10;
    }
    if(carry != 0) q.push(carry);
}

int sum =0;
while(!q.empty()){
    sum += q.front();
    q.pop();
}
cout<<sum;
return 0;
}
