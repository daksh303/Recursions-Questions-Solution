// Josephus Problem 

#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
void solve(vector<int>& v,int k, int index,int &ans) {
    if(v.size()==1){
        ans = v[0];
        return;
    }
    index = (index+k)%(v.size());
    v.erase(v.begin()+index);
    solve(v,k,index,ans);
    return;
}
int main() {
    int n,k;
    cin>>n;
   
    cin>>k;
    vector<int> v;
    for(int i=1; i<=n; i++) {
        v.push_back(i);
    }
    k = k-1;
    int index = 0;
    int ans = -1;
    solve(v,k,index,ans);
    cout<<ans;
    return 0;
}