#include<bits/stdc++.h>
using namespace std;
int Solution::solve(vector<vector<int> > &A) {
    //sort(A.begin(),A.end(),cmp);
    //int ans = 1;
    vector<int> s,e;
    for(int i=0;i<A.size();i++)
    {
        s.push_back(A[i][0]);
        e.push_back(A[i][1]);
    }
    sort(s.begin(),s.end());
    sort(e.begin(),e.end());
    int ans = 0;
    int end = e[0],count = 0;
    int i=0,j=0;
    while(j<s.size()&&i<s.size())
    {
        if(s[i]<e[j]) //one more platform needed
        {
            count++;
            i++;
        }
        else //one platform can be reduced
        {
            count--;
            j++;
        }
        
        ans = max(ans,count);
    }
    return ans;
}
