#include<bits/stdc++.h>
using namespace std;
//FIND DISTINCT SUBSET AND NO DUPLICATE FOUND IN ANY SUBSET
vector<vector<int>> ans;
void find(vector<int> &arr,int n,vector<int> &temp,int i)
{
    if(i==n)
    {
        //if(temp.size())
         ans.push_back(temp);
        return;
    }
    if(temp.size()==0)
    {
        temp.push_back(arr[i]);
        find(arr,n,temp,i+1);
        temp.pop_back();
        find(arr,n,temp,i+1);
        return;
    }
    if(temp.back()!=arr[i])
    {
        temp.push_back(arr[i]);
        find(arr,n,temp,i+1);
        temp.pop_back();
    }
     find(arr,n,temp,i+1);
}
vector<vector<int> > subsets(vector<int> &A) {
    int n = A.size();
    vector<int> temp;
    sort(A.begin(),A.end());
    ans.clear();
    find(A,n,temp,0);
    sort(ans.begin(),ans.end());
    return ans;
}
//FIND NO OF SUBSET WHOSE SUM IS EQUAL TO TARGET
class Solution {
  public:
    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);

    }
  public:
    vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, target, candidates, ans, ds);
      return ans;
    }
};
//NO DUPLICATE ALLOWED IN ABOVE QUESTION
void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = ind; i < arr.size(); i++) {
    if (i > ind && arr[i] == arr[i - 1]) continue;
    if (arr[i] > target) break;
    ds.push_back(arr[i]);
    findCombination(i + 1, target - arr[i], arr, ans, ds);
    ds.pop_back();
  }
}
vector < vector < int >> combinationSum2(vector < int > & candidates, int target) {
  sort(candidates.begin(), candidates.end());
  vector < vector < int >> ans;
  vector < int > ds;
  findCombination(0, target, candidates, ans, ds);
  return ans;
}