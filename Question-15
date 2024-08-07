#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
#include<string>

using namespace std;

typedef long long ll;

// At any point you have two choices right or down 
// In total there will be n right and n down moves 
// So consider it is 0 / 1 i.e. right or down 
// So in total there will be (2*n)!/n!*n! ways

// n = 20

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

ll product = 1;
for(int i=1;i<=20;i++){
    product = (product*(20+i))/i;
}
cout<<product;
return 0;
}
