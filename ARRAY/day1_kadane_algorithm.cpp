#include<bits/stdc++.h>
using namespace std;
//KADANE ALGORITHM
int Solution::maxSubArray(const vector<int> &A) {
    int ans = INT_MIN,temp = 0;
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        temp+= A[i];
        if(ans<temp)
        {
            ans = temp;
        }
        if(temp<0)
        {
            temp = 0;
        }
    }
    return ans;
}
