#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void solve (stack<int>& st, int &k) {
   if(st.size()==1){
   st.pop(); // base condition
   return;
   }
   int temp = st.top();
   st.pop();
  solve(st,k-1);
   st.push(temp);
   return;
}

int main() {
     stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int k = (st.size()/2 + 1 );
   
     solve(st,k);
     
     
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
   

    return 0;
}