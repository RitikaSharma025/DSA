#include<bits/stdc++.h>
using namespace std;
//INTERVIEWBIT SOLUTION
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int m = A.size(),n = A[0].size();
    int i = 0,j = n-1;
    while(i<m&&j>=0)
    {
        if(A[i][j]==B)
         return 1;
        else if(A[i][j]>B)
        {
            j--;
        }
        else
         i++;
    }
    return 0;
}