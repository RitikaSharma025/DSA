#include<bits/stdc++.h>
using namespace std;
//CODESTUDIO SOLUTION
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n = arr.size();
  map<long long,int> m;
  long long sum = 0,ans = 0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    if(sum==0)
     ans = i+1;
    if(m.find(sum)!=m.end())
    {
       long long int a = i-m[sum];
       ans = max(ans,a);
    }
    else
    {
      m[sum] = i;
    }
  }
  return ans;
}