#include<bits/stdc++.h>
using namespace std;
//INTERVIEWBIT SOLUTION
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 static bool cmp(Interval &a,Interval &b)
 {
     //if(a.start<b.start)
      return a.start<b.start;
    
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> v;
    sort(A.begin(),A.end(),cmp);
    v.push_back(A[0]);
    for(int i=1;i<A.size();i++)
    {
        if(A[i].start>v.back().end)
        {
            v.push_back(A[i]);
        }
        else
        {
            v.back().end = max(v.back().end,A[i].end);
        }
    }
    return v;
}
//BRUTE FORCE
vector < pair < int, int >> merge(vector < pair < int, int >> & arr) {

    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector < pair < int, int >> ans;

    for (int i = 0; i < n; i++) {
        int start = arr[i].first, end = arr[i].second;

        //since the intervals already lies 
        //in the data structure present we continue
        if (!ans.empty()) {
            if (start <= ans.back().second) {
                continue;
            }
        }

        for (int j = i + 1; j < n; j++) {
            if (arr[j].first <= end) {
                end = max(end, arr[j].second);
            }
        }
    
        end = max(end, arr[i].second);

        ans.push_back({start, end});
    }

    return ans;
}