#include<bits/stdc++.h>
using namespace std;
#define ll long long
//GFG QUESTION SOLUTION
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        const int N = 1e9+7;
       if(n==1)
        return {1};
       vector<ll> prev(1,1),cur(2);
       for(int i=1;i<n;i++)
       {
           cur[0] = 1;
           cur[i] = 1;
           for(int j=1;j<i;j++)
           {
               cur[j] = (prev[j]%N+prev[j-1]%N)%N;
           }
           prev = cur;
           cur.resize(i+2);
       }
       return prev;
    }
};
//SDE SHEET SOLUTION
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};