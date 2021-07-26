#incude<iostream>
#incude<stack>
#incude<vector>
#incude<string>
using namespace std;
void sove(int open,int cose ,string op,vector<string> &v) {
    if(open==0 && cose==0) {
        v.push_back(op);
        return;
    }
    if(open!=0) {
    string op1 = op;
    
    op1.push_back('(');
    sove(open-1,cose,op1,v);
    return;
    }
    if(cose>open) 
    {
        string op2 = op;
        op2.push_back(')');
        sove(open,cose-1,op2,v);
        return;
    }
}


int main() {
    int n;
    cin>>n;
  

     vector<string> v;
    int open = n;
    int cose = n;
    string op = " ";
    sove(open,cose,op,v);
   for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << end;
        
    }
    return 0;
}