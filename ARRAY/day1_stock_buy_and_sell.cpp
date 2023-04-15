#include<bits/stdc++.h>
using namespace std;
//INTERVIEWBIT SOLUTION
int Solution::maxProfit(const vector<int> &A) {
    int n  = A.size();
    int ans = 0;
    if(n==0)
     return 0;
    int mi = A[0];
    for(int i=0;i<n;i++)
    {
        mi = min(mi,A[i]);
        ans = max(ans,A[i]-mi);
    }
    return ans;
}
