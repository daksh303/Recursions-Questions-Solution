
void solve(int open,int cose ,string op,vector<string>& v) {
    if(open==0 && cose==0) {
        v.push_back(op);
        return;
    }
    if(open!=0) {
    string op1 = op;
    
    op1.push_back('(');
    solve(open-1,cose,op1,v);
    return;
    }
    if(cose>open) 
    {
        string op2 = op;
        op2.push_back(')');
        solve(open,cose-1,op2,v);
        return;
    }
}


