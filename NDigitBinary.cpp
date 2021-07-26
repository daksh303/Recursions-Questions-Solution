// Print N - Bit binary numbers having more 1's than 0's for any prefix

#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
void solve(int one,int zero,string op,int n) {
    if(n==0) {
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back('1');
    solve(one+1,zero,op1,n-1);
    if(one>zero) {
        op2.push_back('0');
        solve(one,zero+1,op2,n-1);
        return;
    }
}
int main() {
    int n;
    cin>>n;
    int one = 0;
    int zero = 0;
    string op = " ";
    op.push_back('1');
    solve(one+1,zero,op,n-1);

    return 0;
}