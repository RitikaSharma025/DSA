#include<bits/stdc++.h>
using namespace std;
//INTERVIEWBIT SOLUTION
int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
      if(x==0 && n==0) return 0;
    long long ans = 1,y = x%d;
    while(n>0){
        if(n&1){
            ans = (ans*y + d)%d;
        }
        y = (y*y + d)%d;
        n = n>>1;
    }
   
    return (ans+d)%d;
}

//LEEETCODE SOLUTION
double myPow(double x, int n) {
  double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
}