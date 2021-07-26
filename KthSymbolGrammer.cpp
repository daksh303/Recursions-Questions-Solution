// Kth Symbol in Grammer
/* 0
  0 1 
  0 1 1 0
  0 1 1 0 1 0 0 1 

  base condition ==> when  n=1,k=1 answer is 0
*/  
#include<iostream>
#include<stack>
#include<vector>
#include<math.h>
using namespace std;
int KthGramer(int n, int k) {
  if (n==1 &&  k==1)
  {
      return 0;
  }
  int mid = pow(2,n-1)/2;
  if(k<=mid)
  {
  return KthGramer(n-1,k);
  }
  else 
     return !KthGramer(n-1,k-mid);
}

int main() 
{
int n = 4;
int k = 6;
cout<<KthGramer(n,k)<<endl;
    return 0;
}