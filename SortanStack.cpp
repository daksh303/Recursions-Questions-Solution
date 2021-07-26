#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void insert(stack<int>& st,int temp)
{
    if(st.size()==0 || st.top()<=temp)
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
void sort(stack<int>& st)
{
    if(st.size()==1)
    {
    return;
    }
    int temp = st.top();
    st.pop();
    sort(st);
    insert(st,temp);
    return;
}
int main() {
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(0);
    st.push(5);
    
    sort(st);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top();
    
    return 0;




}