#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void insert(stack<int>& st,int temp) 
{
   if (st.empty()) 
   {
       st.push(temp);
       return;
   }
   int val = st.top();
   st.pop();
   insert(st,temp);
   st.push(val);
   return;
}
void reverse(stack<int>& st) 
{
    if(st.size()==1)
    {
        return;
    }
   int temp = st.top();
   st.pop();
   reverse(st);
   insert(st,temp);
   return;
}

int main() {
    stack<int> st;
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);
    st.push(27);
if(st.empty()) {
    return 0;
}
reverse(st);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}