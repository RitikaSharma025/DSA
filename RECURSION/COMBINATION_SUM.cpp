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