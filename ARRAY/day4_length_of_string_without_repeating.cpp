#include<bits/stdc++.h>
using namespace std;
int Solution::lengthOfLongestSubstring(string A) {
    int n = A.size();
    int i=0,j=0;
    int ans = 0;
    set<char> s;
    while(j<n)
    {
        if(s.find(A[j])==s.end())
        {
            ans = max(ans,j-i+1);
            
            s.insert(A[j]);
            j++;
        }
        else
        {
            while(i<n&&A[i]!=A[j])
            {
                auto it = s.find(A[i]);
                s.erase(it);
                i++;
            }
            i++;
            j++;
           // ans = max(ans,j-i+1);
        }
    }
    return ans;
}
