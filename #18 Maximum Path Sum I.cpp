#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
#include<string>

using namespace std;


int func(vector<vector<int>>& triangle,int i,int j){
    if(i == 15) return 0;
    int down = triangle[i][j] + func(triangle,i+1,j);
    int dia = triangle[i][j] + func(triangle,i+1,j+1);
    return max(down,dia);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

vector<vector<int>> triangle;

    for (int i = 1; i <= 15; ++i) {
        vector<int> row;
        for (int j = 0; j < i; ++j) {
            int x;cin>>x;
            row.push_back(x);
        }
        triangle.push_back(row);
    }

cout<<func(triangle , 0,0);
return 0;
}
