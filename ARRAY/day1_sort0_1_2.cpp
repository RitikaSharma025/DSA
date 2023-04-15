#include<bits/stdc++.h>
using namespace std;
//DUTCH NATIONAL FLAG ALGORITHM
class Solution {
public:
   void sort(vector<int> &A,int n)
   {
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(A[mid]==0)
        {
            swap(A[low],A[mid]);
            low++;mid++;
        }
        else if(A[mid]==1)
        {
           mid++;
        }
        else if(A[mid]==2)
        {
          swap(A[mid],A[high]);
          high--;
        }
    }
    return;
   }
};